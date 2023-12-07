/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** my_strcmp
*/
#include "../includes/minishell.h"

int my_strcmp(char *search, char *in)
{
    int i = 0;

    while (search[i] != '\0' || in[i] != '\0') {
        if (search[i] != in[i])
            return (1);
        i++;
    }
    return (0);
}
