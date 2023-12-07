/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** my_strcpy
*/
#include "../includes/minishell.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (src == NULL)
        return (NULL);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
