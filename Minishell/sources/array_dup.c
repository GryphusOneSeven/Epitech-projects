/*
** EPITECH PROJECT, 2022
** array_dup.c
** File description:
** array the dup... wait...
*/
#include "../includes/minishell.h"

int count_elements(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        i = i + 1;
    }
    return (i);
}

int count_characters(char *str)
{
    int i = 0;

    if (str == NULL)
        return (-1);
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char **array_dup(char **array)
{
    int i = 0;
    int lenght = 0;
    char **list = 0;
    int word = 0;

    if (array == NULL)
        return (NULL);
    lenght = count_elements(array);
    list = malloc(sizeof(char *) * (lenght + 1));
    while (array[i] != NULL) {
        word = count_characters(array[i]);
        list[i] = malloc(sizeof(char) * (word + 1));
        my_strcpy(list[i], array[i]);
        i = i + 1;
    }
    list[i] = NULL;
    return (list);
}

char **array_cpy(char **dest, char **src)
{
    int i = 0;

    while (src[i] != NULL) {
        dest[i] = my_strdup(src[i]);
        i = i + 1;
    }
    return (dest);
}

char **array_cpy_skip(char **dest, char **src, int pos)
{
    int i = 0;
    int j = 0;

    if (src == NULL)
        return (NULL);
    while (src[i] != NULL) {
        if (i == pos)
            i = i + 1;
        if (src[i] != NULL) {
            dest[j] = my_strdup(src[i]);
            i = i + 1;
            j = j + 1;
        }
    }
    dest[j] = NULL;
    return (dest);
}
