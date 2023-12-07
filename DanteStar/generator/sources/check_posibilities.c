/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** check_posibilities
*/
#include "../includes/generator.h"

int check_posibilities(pos_t *pos, generator_t *info)
{
    int i = 0;

    while (i < (info->x * info->y) / 2) {
        if (pos[i].p != 0)
            return (0);
        i++;
    }
    return (1);
}
