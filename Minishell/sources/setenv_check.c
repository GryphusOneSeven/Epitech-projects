/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** setenv_builtin2
*/
#include "../includes/minishell.h"

int check_existing(main_t *shell, char *name)
{
    int i = 0;

    while (shell->env_c[i] != NULL) {
        if (check_further(name, shell->env_c[i]) == 0) {
            return (i);
        }
        i = i + 1;
    }
    return (-1);
}

int check_input(char *input)
{
    int err = 0;
    int err2 = 0;

    if (input == NULL)
        return (0);
    err = char_is_alpha(input[0]);
    err2 = my_str_isalphanum(input);

    if (err == 1) {
        error_output("setenv", 2);
        return (1);
    }
    if (err2 == 1) {
        error_output("setenv", 3);
        return (1);
    }
    return (0);
}
