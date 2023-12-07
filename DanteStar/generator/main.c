/*
** EPITECH PROJECT, 2022
** new dante
** File description:
** main
*/
#include "./includes/generator.h"

void building_process(char **maze, generator_t *info, direction_t *dir, \
pos_t *pos)
{
    int rdm = 0;
    int index = 0;

    while (check_posibilities(pos, info) != 1) {
        check_directions(maze, dir, info);
        if (dir->way != 0) {
            rdm = rand() % 4;
            pos[index].p = dir->way;
            pos[index].x = info->curr_x;
            pos[index].y = info->curr_y;
            index++;
            random_break(dir, maze, info, rdm);
        } else if (index >= 0) {
            pos[index].p = dir->way;
            index--;
            info->curr_x = pos[index].x;
            info->curr_y = pos[index].y;
        }
    }
}

void start_maze(char **maze, generator_t *info)
{
    direction_t dir = init_direction();
    pos_t *pos = init_position(info);
    building_process(maze, info, &dir, pos);
    end_maze(maze, info);
    free(pos);
}

int main(int ac, char **av)
{
    char **tab = NULL;
    generator_t info;
    info.curr_x = 0;
    info.curr_y = 0;
    info.perfect = 0;
    info.last = 0;

    srand(time(NULL));
    if ((ac < 3) || (ac > 4))
        return (84);
    info.x = atoi(av[1]);
    info.y = atoi(av[2]);
    if (check_info(&info, av, ac) == 1)
        return (84);
    tab = create_tab(info.x, info.y);
    start_maze(tab, &info);
    free_tab(tab);
    return (0);
}
