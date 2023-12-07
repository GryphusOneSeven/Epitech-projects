/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** init_direction
*/
#include "../includes/generator.h"

direction_t init_direction(void)
{
    direction_t dir;

    dir.up = 0;
    dir.left = 0;
    dir.right = 0;
    dir.down = 0;
    dir.way = 0;
    return (dir);
}

void reset_directions(direction_t *dir)
{
    dir->up = 0;
    dir->left = 0;
    dir->right = 0;
    dir->down = 0;
    dir->way = 0;
}
