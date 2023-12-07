/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** cd_builtin3
*/
#include "../includes/minishell.h"

int get_to_oldpwd(main_t *shell)
{
    int i = 0;

    while (shell->env_c[i] != NULL) {
        if (my_strncmp("OLDPWD=", shell->env_c[i], 7) == 0)
            return (i);
        i = i + 1;
    }
    return (-1);
}

int cd_minus(main_t *shell)
{
    char *str = NULL;
    int pwd = get_to_pwd(shell);
    int pos = get_to_oldpwd(shell);

    if (pos == -1) {
        error_output("", 8);
        return (84);
    }
    str = my_strdup(shell->env_c[pos] + 7);
    if (chdir(str) != 0)
        my_puterr("Error???\n");
    change_pwd(shell, str, pwd);
    return (0);
}
