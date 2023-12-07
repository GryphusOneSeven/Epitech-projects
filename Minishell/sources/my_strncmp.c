/*
** EPITECH PROJECT, 2022
** Unix System Programming 2
** File description:
** my_strncmp
*/
#include "../includes/minishell.h"

int my_strncmp(char *search, char *in, int lenght)
{
    int i = 0;

    while (i != lenght) {
        if (in[i] != search[i]) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}

int check_further(char *search, char *in)
{
    int i = 0;

    while (in[i] != '=') {
        if (search[i] == '\0' || search[i] != in[i])
            return (1);
        i++;
    }
    if (in[i] == '=' && search[i] != '\0')
        return (1);
    return (0);
}
