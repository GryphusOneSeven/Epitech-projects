/*
** EPITECH PROJECT, 2022
** NEW
** File description:
** get_path
*/
#include "../includes/minishell.h"

char *get_path(char **env)
{
    int i = 0;

    while (env[i] != NULL) {
        if (my_strncmp("PATH=", env[i], 5) == 0)
            return (env[i] + 5);
        i = i + 1;
    }
    return (NULL);
}

char **sep_path(char *path)
{
    int i = 0;
    int size = 0;
    char **list = NULL;

    if (path == NULL)
        return (NULL);
    size = new_count_words(path, ":");
    list = malloc(sizeof(char *) * (size * 1));
    if (size == 1) {
        list[0] = my_strdup(path);
        list[1] = NULL;
        return (list);
    }
    list[0] = strtok(path, ":");
    while (i < size - 1) {
        list[i] = strtok(NULL, ":");
        i = i + 1;
    }
    list[i] = NULL;
    return (list);
}
