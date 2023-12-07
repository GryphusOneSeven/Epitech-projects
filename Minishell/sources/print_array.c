/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** print array
*/
#include "../includes/minishell.h"

void print_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_printf("%s\n", array[i]);
        i = i + 1;
    }
}
