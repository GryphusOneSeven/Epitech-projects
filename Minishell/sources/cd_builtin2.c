/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** cd_builtin2
*/
#include "../includes/minishell.h"

int get_to_pwd(main_t *shell)
{
    int i = 0;

    while (shell->env_c[i] != NULL) {
        if (my_strncmp("PWD=", shell->env_c[i], 4) == 0)
            return (i);
        i = i + 1;
    }
    return (-1);
}

void change_pwd(main_t *shell, char *name, int pos)
{
    int lenght = count_till_equal(shell->env_c[pos]);
    char *line = my_strndup(shell->env_c[pos], lenght);
    int size = my_strlen(shell->env_c[pos] + my_strlen(name) + 1);
    char *full = my_strdup_cat(line, name, size);

    shell->env_c[pos] = my_strdup(full);
    free(line);
    free(full);
}

void change_dir(main_t *shell)
{
    int pos = get_to_pwd(shell);

    if (chdir(shell->split[1]) != 0)
        my_puterr("Error???\n");
    change_pwd(shell, shell->split[1], pos);
}
