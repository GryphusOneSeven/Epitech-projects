/*
** EPITECH PROJECT, 2022
** new dante
** File description:
** generator
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <signal.h>
    #include <sys/wait.h>
    #include <string.h>
    #include <time.h>

typedef struct generator {
    int x;
    int y;
    int perfect;
    int curr_x;
    int curr_y;
    int last;
}generator_t;

typedef struct direction {
    int way;
    int up;
    int right;
    int down;
    int left;
}direction_t;

typedef struct position {
    int x;
    int y;
    int p;
}pos_t;

char **create_tab(int x, int y);
direction_t init_direction(void);
void check_directions(char **maze, direction_t *dir, generator_t *info);
void move_up(generator_t *info, char **maze);
void move_right(generator_t *info, char **maze);
void move_down(generator_t *info, char **maze);
void move_left(generator_t *info, char **maze);
pos_t *init_position(generator_t *info);
void change_cell(generator_t *info, char **maze, direction_t *dir, int r);
void break_wall(direction_t *dir, char **maze, generator_t *info);
int check_posibilities(pos_t *pos, generator_t *info);
int check_r(char **maze, int x, int y, generator_t *info);
int check_l(char **maze, int x, int y);
int check_u(char **maze, int x, int y);
int check_d(char **maze, int x, int y, generator_t *info);
void reset_directions(direction_t *dir);
void random_break(direction_t *dir, char **maze, generator_t *info, int rdm);
void right_first(generator_t *info, char **maze, direction_t *dir);
void left_first(generator_t *info, char **maze, direction_t *dir);
void down_first(generator_t *info, char **maze, direction_t *dir);
void up_first(generator_t *info, char **maze, direction_t *dir);
void end_maze(char **maze, generator_t *info);
int check_info(generator_t *info, char **av, int ac);
void free_tab(char **maze);
void print_tab(char **maze);

#endif
