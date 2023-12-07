/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** check_builtin
*/
#include "../includes/minishell.h"

void check_builtin(main_t *shell)
{
    shell->builtin = 1;
    shell->r_value = 0;

    if (my_strcmp("env", shell->split[0]) == 0) {
        env_builtin(shell);
        shell->builtin = 0;
    }
    if (my_strcmp("setenv", shell->split[0]) == 0) {
        shell->r_value = setenv_builtin(shell, shell->split);
        shell->builtin = 0;
    }
    if (my_strcmp("unsetenv", shell->split[0]) == 0) {
        unsetenv_builtin(shell, shell->split);
        shell->builtin = 0;
    }
    if (my_strcmp("cd", shell->split[0]) == 0) {
        shell->r_value = cd_builtin(shell);
        shell->builtin = 0;
    }
}

void check_builtin2(main_t *shell)
{
    if (my_strcmp("exit", shell->split[0]) == 0) {
        shell->r_value = exit_builtin(shell);
        shell->builtin = 0;
    }
}
