/*
** EPITECH PROJECT, 2022
** new dante
** File description:
** create_tab
*/
#include "../includes/generator.h"

char **create_tab(int x, int y)
{
    char **maze = malloc(sizeof(char *) * (y + 1));

    for (int i = 0; i < y; i++) {
        maze[i] = malloc(sizeof(char) * (x + 1));
        for (int  j = 0; j < x; j++)
            maze[i][j] = 'X';
        maze[i][x] = '\0';
    }
    maze[y] = NULL;
    maze[0][0] = '*';
    return (maze);
}
