/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** strdup low cost
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i = 0;
    char *output;

    output = malloc(sizeof(char) * my_strlen(src) + 1);
    while (src[i] != '\0') {
        output[i] = src[i];
        i = i + 1;
    }
    output[i] = '\0';
    return (output);
}
