/*
** EPITECH PROJECT, 2022
** put_in_array.c
** File description:
** put in array
*/
#include "../includes/minishell.h"

char **put_in_array(char *str, char *delim)
{
    int i = 1;
    int size = new_count_words(str, delim);
    char **list = malloc(sizeof(char *) * (size + 1));

    if (size == 1) {
        list[0] = my_strdup(str);
        list[1] = NULL;
        return (list);
    } else {
        list[0] = strtok(str, " \t");
        while (i < size + 1) {
            list[i] = strtok(NULL, " \t");
            i = i + 1;
        }
        list[i] = NULL;
    }
    return (list);
}
