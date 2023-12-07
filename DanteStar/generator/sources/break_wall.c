/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** break_wall
*/
#include "../includes/generator.h"

void break_wall(direction_t *dir, char **maze, generator_t *info)
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
