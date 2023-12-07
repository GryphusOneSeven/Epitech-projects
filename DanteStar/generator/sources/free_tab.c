/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** free_tab
*/
#include "../includes/generator.h"

void free_tab(char **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        free(maze[i]);
        i++;
    }
    free(maze);
}
