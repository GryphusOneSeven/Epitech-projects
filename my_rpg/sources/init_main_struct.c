/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** init_main_struct
*/
#include "../includes/my_rpg.h"

main_t init_main_struct(void)
{
    main_t main;
    main.wd = create_window();
    main.bg = create_all_backgrounds();
    main.hero = create_hero("assets/sprites/hero.png");
    main.button = creat_all_button();
    main.pnj = create_all_pnj();
    main.map = create_all_maps();
    main.state = 0;
    main.bgm = create_all_bgm();
    main.enemies = create_all_enemies();
    main.text = create_all_text();
    main.stat = create_stat(main.hero);
    main.rd = rand() % 3;
    main.quest = 0;

    return (main);
}
