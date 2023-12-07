/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_button
*/
#include "../includes/my_rpg.h"

button_t create_button(char *filepath, int pos_x, int pos_y)
{
    button_t button;

    button.sprite = sfSprite_create();
    button.texture = sfTexture_createFromFile(filepath, NULL);
    button.pos = (sfVector2f){pos_x, pos_y};

    sfSprite_setTexture(button.sprite, button.texture, sfTrue);
    sfSprite_setPosition(button.sprite, button.pos);
    return button;
}

button_t *creat_all_button(void)
{
    button_t *btn = malloc(sizeof(button_t) * 7);

    btn[0] = create_button("./assets/play.png", 300, 280);
    btn[1] = create_button("./assets/exit.png", 680, 280);
    btn[2] = create_button("./assets/battle_inter.png", 380, 570);
    btn[3] = create_button("./assets/hero_stat.png", 0, 570);
    btn[4] = create_button("./assets/attack.png", 480, 580);
    btn[5] = create_button("./assets/run.png", 900, 590);
    btn[6] = create_button("./assets/quest_inter2.png", 975, 0);
    btn[0].rect = (sfIntRect){0, 0, 243, 228};
    btn[1].rect = (sfIntRect){0, 0, 243, 228};
    btn[2].rect = (sfIntRect){0, 0, 900, 150};
    btn[3].rect = (sfIntRect){0, 0, 200, 150};
    btn[4].rect = (sfIntRect){0, 0, 126, 56};
    btn[5].rect = (sfIntRect){0, 0, 78, 45};
    sfSprite_setScale(btn[4].sprite, (sfVector2f){2, 2});
    sfSprite_setScale(btn[5].sprite, (sfVector2f){2, 2});
    return btn;
}
