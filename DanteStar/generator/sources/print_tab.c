/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** print_tab
*/
#include "../includes/generator.h"

void print_tab(char **maze)
{
    int i = 0;

    for (; maze[i] != NULL; i++) {
        if (maze[i + 1] == NULL)
            printf("%s", maze[i]);
        else
            printf("%s\n", maze[i]);
    }
}
