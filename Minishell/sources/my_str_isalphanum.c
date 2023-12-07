/*
** EPITECH PROJECT, 2021
** my_str_isaplhanum
** File description:
** 1 if only alphanum or 0 if not
*/
#include "../includes/minishell.h"

int my_str_isalphanum(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9') &&
        (str[i] < 'A' || str[i] > 'Z') &&
        (str[i] < 'a' || str[i] > 'z') &&
        str[i] != '_')
            return (1);
        i++;
    }
    return (0);
}
