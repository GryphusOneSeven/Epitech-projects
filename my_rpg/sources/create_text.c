/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** create_text
*/
#include "../includes/my_rpg.h"

text_t *create_text(char *str, int x, int y)
{
    text_t *text = malloc(sizeof(text_t));
    text->text = sfText_create();
    text->font = sfFont_createFromFile("assets/font.ttf");
    text->str = malloc(sizeof(char) * 10);

    sfText_setString(text->text, str);
    sfText_setPosition(text->text, (sfVector2f){x, y});
    sfText_setFont(text->text, text->font);
    sfText_setColor(text->text, sfWhite);
    return (text);
}

text_t **create_all_text(void)
{
    text_t **text = malloc(sizeof(sfText *) * 5);
    char *t0 = "You wake up in a cave... You must find a way out";
    char *t1 = "You made it out of the cave...\n\
\t\tyou should talk to the villagers";
    char *t2 = "You made it to the castle... \
Somehow, the guards let you get inside";
    char *t3 = "You defeated a powerful enemy, \
you are filled with determination, \n\t\t\t\t\t\t\t\tTHE END";

    text[0] = create_text(t0, 280, 360);
    text[1] = create_text(t1, 280, 340);
    text[2] = create_text(t2, 220, 340);
    text[3] = create_text(t3, 220, 320);
    text[4] = NULL;
    return (text);
}
