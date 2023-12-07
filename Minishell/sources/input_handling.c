/*
** EPITECH PROJECT, 2022
** Backup
** File description:
** input_handling
*/
#include "../includes/minishell.h"

int input_handling(char *str)
{
    char *dup = my_strdup(str);
    char *test = strtok(dup, " \t\n");

    if (test == NULL) {
        free(dup);
        return (1);
    }
    return (0);
}
