/*
** EPITECH PROJECT, 2022
** new dante
** File description:
** check_direction
*/
#include "../includes/generator.h"

int check_r(char **maze, int x, int y, generator_t *info)
{
    if ((x + 1) < info->x) {
        if ((x + 2) <= info->x && maze[y][x + 2] == 'X')
            return (0);
    }
    return (1);
}

int check_l(char **maze, int x, int y)
{
    if ((x - 1) > 0) {
        if ((x - 2) >= 0 && maze[y][x - 2] == 'X')
            return (0);
    }
    return (1);
}

int check_u(char **maze, int x, int y)
{
    if ((y - 1) > 0) {
        if ((y - 2) > 0 && maze[y - 2][x] == 'X') {
            return (0);
        }
    }
    return (1);
}

int check_d(char **maze, int x, int y, generator_t *info)
{
    if ((y + 1) < info->y) {
        if ((y + 2) < info->y && maze[y + 2][x] == 'X')
            return (0);
    }
    return (1);
}

void check_directions(char **maze, direction_t *dir, generator_t *info)
{
    reset_directions(dir);
    if (check_r(maze, info->curr_x, info->curr_y, info) == 0) {
        dir->right = 1;
        dir->way++;
    }
    if (check_u(maze, info->curr_x, info->curr_y) == 0) {
        dir->up = 1;
        dir->way++;
    }
    if (check_d(maze, info->curr_x, info->curr_y, info) == 0) {
        dir->down = 1;
        dir->way++;
    }
    if (check_l(maze, info->curr_x, info->curr_y) == 0) {
        dir->left = 1;
        dir->way++;
    }
}
