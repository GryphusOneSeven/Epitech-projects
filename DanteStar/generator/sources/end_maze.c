/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** end_maze
*/
#include "../includes/generator.h"

void break_it(char **maze, generator_t *info, int *j)
{
    int i = 0;
    int random = 0;

    while (i != (info->x)) {
        random = rand() % 6;
        if (random == 1 && maze[*j][i] == 'X')
            maze[*j][i] = '*';
        i++;
    }
}

void make_imperfect(char **maze, generator_t *info)
{
    int j = 0;

    while (j != (info->y)) {
        break_it(maze, info, &j);
        j++;
    }
}

void destroy_edges(char **maze, generator_t *info)
{
    int i = 0;

    while (i < info->x - 4) {
        if (maze[info->y - 2][i] == '*' && \
        maze[info->y - 2][i + 1] == '*' && maze[info->y - 2][i + 1] == '*') {
            maze[info->y - 1][i + 1] = '*';
        }
        i = i + 3;
    }
    i = 0;
    while (i < info->y - 3) {
        if (maze[i][info->x - 2] == '*' && \
        maze[i + 2][info->x - 2] == '*' && maze[i + 3][i + 1] == '*') {
            maze[i + 1][info->x - 1] = '*';
        }
        i = i + 3;
    }
}

void end_maze(char **maze, generator_t *info)
{
    int rdm = rand() % 2;

    maze[info->y - 1][info->x - 1] = '*';
    if (maze[info->y - 2][info->x - 1] == 'X' \
        && maze[info->y - 1][info->x - 2] == 'X') {
        if (rdm == 0)
            maze[info->y - 2][info->x - 1] = '*';
        if (rdm == 1)
            maze[info->y - 1][info->x - 2] = '*';
        if (info->x > 5 && info->y > 5 && info->perfect == 1)
            destroy_edges(maze, info);
    }
    if (info->perfect == 0) {
        make_imperfect(maze, info);
    }
    print_tab(maze);
}
