/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** unsetenv_builtin
*/
#include "../includes/minishell.h"

char **delete_element(main_t *shell, int pos)
{
    int size = count_elements(shell->env_c);
    char **new = malloc(sizeof(char *) * size);

    array_cpy_skip(new, shell->env_c, pos);
    return (new);
}

int unsetenv_builtin(main_t *shell, char **arr)
{
    int pos = 0;
    int size = count_elements(arr);

    if (size == 1) {
        error_output("unsetenv", 4);
        return (1);
    }
    for (int i = 1; i != size; i++) {
        pos = check_existing(shell, arr[i]);
        if (pos != -1)
            shell->env_c = delete_element(shell, pos);
    }
    return (0);
}
