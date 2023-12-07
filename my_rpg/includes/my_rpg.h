/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-gael.edmond
** File description:
** my_rpg
*/

#ifndef MY_RPG_H_
    #define MY_RPG_H_
    #include <unistd.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/Sprite.h>
    #include <SFML/System/InputStream.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <stdlib.h>

typedef struct texts {
    char *str;
    sfText *text;
    sfFont *font;
}text_t;

typedef struct button {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    sfIntRect hitbox;
}button_t;

typedef struct bg {
    sfSprite *sprite;
    sfTexture *texture;
}bg_t;

typedef struct enemy {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    text_t *stat;
    int hp;
    int xp_gain;
    int atk;
    int def;
}enemy_t;

typedef struct window {
    sfRenderWindow *window;
    sfVector2u size;
    sfVideoMode video_mode;
    sfEvent event;
    sfClock *clock;
}wd_t;

typedef struct hero {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    int hp;
    int level;
    int xp;
    int atk;
    int def;
    int luck;
    sfClock *cooldown;
}hero_t;

typedef struct map {
    sfSprite *sprite;
    sfTexture *texture;
    sfFloatRect exit;
    sfVector2f pos;
}map_t;

typedef struct pnj {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    text_t *text;
    sfFloatRect zone;
}pnj_t;

typedef struct main {
    wd_t *wd;
    button_t *button;
    bg_t **bg;
    pnj_t **pnj;
    map_t **map;
    hero_t *hero;
    enemy_t **enemies;
    text_t **text;
    sfMusic **bgm;
    int state;
    sfVector2i mouse_pos;
    text_t **stat;
    text_t **char_stat;
    int rd;
    sfClock *help;
    int quest;
}main_t;

enum scene {
    MENU,
    CAVERN,
    VILLAGE,
    CASTLE,
    BATTLE,
    LOADING,
    PAUSE,
    END,
    QUIT,
};

int my_getnbr(char const *str);
wd_t *create_window(void);
int ev_close(main_t *game);
int ev_start(main_t *game);
void free_all(main_t *main);
void draw_title(main_t *game);
main_t init_main_struct(void);
button_t *creat_all_button(void);
hero_t *create_hero(char *filepath);
void analyse_events(sfRenderWindow *wi, sfEvent event, main_t *main);
int on_close(main_t *game, int ofset);
void menu_function(main_t *main);
void game_function(main_t *main);
void hero_inputs(main_t *main);
void move_rect(main_t *main, int offset, int max_value);
void clock_for_rect(main_t *main);
void scroll_map_right(map_t *map);
bg_t **create_all_backgrounds(void);
enemy_t **create_all_enemies(void);
map_t **create_all_maps(void);
sfMusic **create_all_bgm(void);
void cavern_function(main_t *main);
void village_function(main_t *main);
void battle_function(main_t *main);
void bgm_handling(sfMusic **bgm, int i);
void destroy_backgrounds(main_t *main);
void destroy_enemies(main_t *main);
void destroy_maps(main_t *main);
void activating_combat_mode(main_t *main);
void castle_function(main_t *main);
text_t **create_all_text(void);
void destroy_texts(main_t *main);
void loading_function(main_t *main, int i, int dest);
void first_loading(main_t *main);
text_t **create_stat(hero_t *hero);
text_t *create_text(char *str, int x, int y);
void draw_stats(main_t *main);
char *my_putnbr_in_str(int nb, char *stat);
text_t **put_stat_in_text(main_t *main);
text_t **create_char_stat(main_t *main);
void draw_char_stats(main_t *main);
void update_stat(main_t *main, hero_t *hero);
char *clear_str(char *str, int size);
void check_death(main_t *main);
int on_attack(main_t *game);
void update_enemy(main_t *main);
pnj_t **create_all_pnj(void);
void check_npc(main_t *main);
void check_quest(main_t *main);

#endif
