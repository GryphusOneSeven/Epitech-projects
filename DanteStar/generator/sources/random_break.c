/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** random_break
*/
#include "../includes/generator.h"

void random_break(direction_t *dir, char **maze, generator_t *info, int rdm)
{
    if (rdm == 0 && info->last != 1)
        return (left_first(info, maze, dir));
    if (rdm == 1 && info->last != 2)
        return (down_first(info, maze, dir));
    if (rdm == 2 && info->last != 3)
        return (up_first(info, maze, dir));
    if (rdm == 3 && info->last != 4)
        return (right_first(info, maze, dir));
}
