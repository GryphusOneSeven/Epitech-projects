/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** print arguments
*/
#include "../includes/minishell.h"

void print_arg(char **arg)
{
    arg = arg + 1;
    while (*arg) {
        my_putstr(*arg);
        my_putchar(' ');
        arg++;
    }
    my_putchar('\n');
}
