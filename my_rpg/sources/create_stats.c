/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_stats
*/
#include "../includes/my_rpg.h"

void create_all_texts(text_t **stat, hero_t *hero)
{
    char *s0 = malloc(sizeof(char) * 10);
    char *s1 = malloc(sizeof(char) * 10);
    char *s2 = malloc(sizeof(char) * 10);
    char *s3 = malloc(sizeof(char) * 10);
    char *s4 = malloc(sizeof(char) * 10);
    clear_str(s0, 10);
    clear_str(s1, 10);
    clear_str(s2, 10);
    clear_str(s3, 10);
    clear_str(s4, 10);

    stat[0] = create_text(my_putnbr_in_str(hero->level, s0), 90, 575);
    stat[1] = create_text(my_putnbr_in_str(hero->hp, s1), 90, 605);
    stat[2] = create_text(my_putnbr_in_str(hero->atk, s2), 90, 630);
    stat[3] = create_text(my_putnbr_in_str(hero->def, s3), 90, 655);
    stat[4] = create_text(my_putnbr_in_str(hero->luck, s4), 90, 680);
}

text_t **create_stat(hero_t *hero)
{
    text_t **stat = malloc(sizeof(sfText *) * 5);

    create_all_texts(stat, hero);
    for (int i = 0; i < 5; i++) {
        sfText_setScale(stat[i]->text, (sfVector2f){0.75, 0.75});
    }
    return (stat);
}

void draw_stats(main_t *main)
{
    sfRenderWindow_drawText(main->wd->window, main->stat[0]->text, NULL);
    sfRenderWindow_drawText(main->wd->window, main->stat[1]->text, NULL);
    sfRenderWindow_drawText(main->wd->window, main->stat[2]->text, NULL);
    sfRenderWindow_drawText(main->wd->window, main->stat[3]->text, NULL);
    sfRenderWindow_drawText(main->wd->window, main->stat[4]->text, NULL);
}
