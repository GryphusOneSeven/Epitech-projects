/*
** EPITECH PROJECT, 2021
** analyse_events
** File description:
** function that analyse events
*/
#include "../includes/my_rpg.h"

int botton_is_on(main_t *main)
{
    if (on_close(main, 243) == 0)
        return 0;
    return 0;
}

void analyse_events(sfRenderWindow *window, sfEvent event, main_t *main)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || main->state == QUIT)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed && main->state == MENU)
            on_close(main, 486);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            (main->state) = MENU;
        botton_is_on(main);
    }
}
