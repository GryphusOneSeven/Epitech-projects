/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Lenght of str
*/
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (-1);
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
