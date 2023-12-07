/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** new_put_in_array
*/
#include "../includes/minishell.h"

char **new_put_in_array(char *str)
{
    int i = 1;
    int size = new_count_words(str, " \n\t");
    char **new = malloc(sizeof(char *) * (size + 1));

    new[0] = strtok(str, " \n\t");
    while (i != size) {
        new[i] = strtok(NULL, " \n\t");
        i = i + 1;
    }
    new[i] = NULL;
    return (new);
}
