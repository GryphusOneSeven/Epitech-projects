/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** put_stat_in_text
*/
#include "../includes/my_rpg.h"

void update_stat(main_t *main, hero_t *hero)
{
    free(main->stat);
    main->stat = create_stat(hero);
}
