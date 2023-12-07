/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** exit_builtin
*/
#include "../includes/minishell.h"

int exit_builtin(main_t *shell)
{
    int value = 0;
    int test = 0;

    if (count_elements(shell->split) == 1) {
        my_printf("exit\n");
        exit(0);
    }
    test = my_str_isnum(shell->split[1]);
    if (test == 1) {
        error_output("exit", 5);
        return (84);
    }
    if (test == 2) {
        error_output("exit", 6);
        return (84);
    }
    value = my_getnbr(shell->split[1]);
    my_printf("exit\n");
    exit(value);
    return (0);
}
