/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** env_builtin
*/
#include "../includes/minishell.h"

void env_builtin(main_t *shell)
{
    print_array(shell->env_c);
}
