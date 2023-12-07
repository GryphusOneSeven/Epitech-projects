/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** my_strndup
*/
#include "../includes/minishell.h"

char *my_strndup(char const *source, int n)
{
    int i = 0;
    char *output;
    int lenght = my_strlen(source);

    if (n > lenght) {
        my_putstr("Invalid size!\n");
        return ("84");
    }
    output = malloc(sizeof(char) * (n + 1));
    while (i != n) {
        output[i] = source[i];
        i = i + 1;
    }
    output[i] = '\0';
    return (output);
}
