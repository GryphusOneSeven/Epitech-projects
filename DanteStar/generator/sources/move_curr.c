/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** move_curr
*/
#include "../includes/generator.h"

void move_up(generator_t *info, char **maze)
{
    if (check_u(maze, info->curr_x, info->curr_y) == 0) {
        maze[info->curr_y - 1][info->curr_x] = '*';
        maze[info->curr_y - 2][info->curr_x] = '*';
        info->curr_y -= 2;
        info->last = 3;
    }
}

void move_right(generator_t *info, char **maze)
{
    maze[info->curr_y][info->curr_x + 1] = '*';
    maze[info->curr_y][info->curr_x + 2] = '*';
    info->curr_x += 2;
    info->last = 4;
}

void move_down(generator_t *info, char **maze)
{
    maze[info->curr_y + 1][info->curr_x] = '*';
    maze[info->curr_y + 2][info->curr_x] = '*';
    info->curr_y += 2;
    info->last = 2;
}

void move_left(generator_t *info, char **maze)
{
    if (check_l(maze, info->curr_x, info->curr_y) == 0) {
        maze[info->curr_y][info->curr_x - 1] = '*';
        maze[info->curr_y][info->curr_x - 2] = '*';
        info->curr_x -= 2;
        info->last = 1;
    }
}
