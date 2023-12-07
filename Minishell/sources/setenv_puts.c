/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** setenv_puts
*/
#include "../includes/minishell.h"

void replace_value(main_t *shell, char *name, int pos)
{
    shell->env_c[pos] = my_strdup_cat(name, "=", (my_strlen(name) + 1));
}

char **create_new(main_t *shell, char *name)
{
    int size = count_elements(shell->env_c);
    char **new = malloc(sizeof(char *) * (size + 2));
    char *str = my_strdup_cat(name, "=", (my_strlen(name) + 1));

    array_cpy(new, shell->env_c);
    new[size] = my_strdup(str);
    new[size + 1] = NULL;
    return (new);
}

char **create_full(main_t *shell, char *name)
{
    int size = count_elements(shell->env_c);
    char **new = malloc(sizeof(char *) * (size + 2));

    array_cpy(new, shell->env_c);
    new[size] = my_strdup(name);
    new[size + 1] = NULL;
    return (new);
}
