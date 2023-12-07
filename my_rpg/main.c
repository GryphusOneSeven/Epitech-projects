/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** main
*/
#include "./includes/my_rpg.h"

void game_loop(main_t *main)
{
    if ((main->state) == MENU) {
        sfRenderWindow_clear(main->wd->window, sfBlack);
        menu_function(main);
    }
    if ((main->state) != MENU) {
        sfRenderWindow_clear(main->wd->window, sfBlack);
        game_function(main);
    }
    sfRenderWindow_display(main->wd->window);
}

int main(void)
{
    main_t main = init_main_struct();

    while (sfRenderWindow_isOpen(main.wd->window)) {
        analyse_events(main.wd->window, main.wd->event, &main);
        game_loop(&main);
    }
    free_all(&main);
    return (0);
}
