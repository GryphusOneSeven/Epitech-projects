/*
** EPITECH PROJECT, 2022
** B-PSU-210-RUN-2-1-minishell2-gael.edmond
** File description:
** semicolon
*/
#include "../includes/minishell.h"

char **split_semicolon(char *str)
{
    int i = 1;
    int size = new_count_words(str, ";");
    char **new = malloc(sizeof(char *) * (size + 1));

    new[0] = strtok(str, ";");
    while (i != size) {
        new[i] = strtok(NULL, ";");
        i = i + 1;
    }
    new[i] = NULL;
    return (new);
}
