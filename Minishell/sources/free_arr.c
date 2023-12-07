/*
** EPITECH PROJECT, 2022
** free_env.c
** File description:
** Let it go
*/
#include "../includes/minishell.h"

void free_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        free(array[i]);
        i = i + 1;
    }
}
