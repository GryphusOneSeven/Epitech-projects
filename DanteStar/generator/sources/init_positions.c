/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-gael.edmond
** File description:
** init_positions
*/
#include "../includes/generator.h"

pos_t *init_position(generator_t *info)
{
    int max = ((info->x * info->y) / 2);
    pos_t *pos = malloc(sizeof(pos_t) * max);

    for (int i = 0; i != max; i++) {
        pos[i].x = 0;
        pos[i].y = 0;
        pos[i].p = 0;
    }
    pos[0].p = 2;
    return (pos);
}
