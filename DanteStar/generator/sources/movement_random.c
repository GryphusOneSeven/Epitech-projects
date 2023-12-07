/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** movement_random
*/
#include "../includes/generator.h"

void right_first(generator_t *info, char **maze, direction_t *dir)
{
    if (dir->right == 1)
        return (move_right(info, maze));
    if (dir->up == 1)
        return (move_up(info, maze));
    if (dir->down == 1)
        return (move_down(info, maze));
    if (dir->left == 1)
        return (move_left(info, maze));
}

void up_first(generator_t *info, char **maze, direction_t *dir)
{
    if (dir->up == 1)
        return (move_up(info, maze));
    if (dir->down == 1)
        return (move_down(info, maze));
    if (dir->right == 1)
        return (move_right(info, maze));
    if (dir->left == 1)
        return (move_left(info, maze));
}

void down_first(generator_t *info, char **maze, direction_t *dir)
{
    if (dir->down == 1)
        return (move_down(info, maze));
    if (dir->right == 1)
        return (move_right(info, maze));
    if (dir->left == 1)
        return (move_left(info, maze));
    if (dir->up == 1)
        return (move_up(info, maze));
}

void left_first(generator_t *info, char **maze, direction_t *dir)
{
    if (dir->left == 1)
        return (move_left(info, maze));
    if (dir->right == 1)
        return (move_right(info, maze));
    if (dir->up == 1)
        return (move_up(info, maze));
    if (dir->down == 1)
        return (move_down(info, maze));
}
