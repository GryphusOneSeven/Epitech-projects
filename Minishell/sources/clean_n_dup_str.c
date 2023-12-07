/*
** EPITECH PROJECT, 2022
** clean_n_dup_str.c
** File description:
** Clean and dup
*/
#include "../includes/minishell.h"

char *clean_n_dup_str(char *in)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(in);
    char *out = malloc(sizeof(char) * (len + 1));

    while (in[i] != '\0') {
        if (in[i] == ' ' || in[i] == '\n') {
            i = i + 1;
            break;
        } else {
            out[j] = in[i];
            i = i + 1;
            j = j + 1;
        }
    }
    out[i] = '\0';
    return (out);
}
