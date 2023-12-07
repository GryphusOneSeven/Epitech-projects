/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** concatenates 2 strings
*/
#include "../includes/minishell.h"

char *my_strdup_cat(char *dest, char *src, int size)
{
    int i = 0;
    int j = 0;
    char *out = malloc(sizeof(char) * (size + 1));

    while (dest[i] != '\0') {
        out[i] = dest[i];
        i = i + 1;
    }
    while (src[j] != '\0') {
        out[i] = src[j];
        i = i + 1;
        j = j + 1;
    }
    out[i] = '\0';
    return (out);
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int c = 0;

    while (dest[i] != '\0')
        i = i + 1;
    while (src[c] != '\0') {
        dest[i] = src[c];
        i = i + 1;
        c = c + 1;
    }
    dest[i] = '\0';
    return (dest);
}
