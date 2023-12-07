/*
** EPITECH PROJECT, 2022
** NEW
** File description:
** count_words
*/
#include "../includes/minishell.h"

int count(char c, char sep, int nbr)
{
    if (c == sep)
        nbr = nbr + 1;
    return (nbr);
}

int new_count_words(char *str, char *sep)
{
    int nbr = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; sep[j] != '\0'; j++) {
            nbr = count(str[i], sep[j], nbr);
        }
    }
    return (nbr);
}
