/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** strdup low cost
*/
#include "../includes/minishell.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *output = NULL;

    if (src == NULL)
        return (NULL);
    output = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        output[i] = src[i];
        i = i + 1;
    }
    output[i] = '\0';
    return (output);
}
