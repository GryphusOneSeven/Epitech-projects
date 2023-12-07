/*
** EPITECH PROJECT, 2022
** new dante
** File description:
** main
*/
#include "./includes/solver.h"

int main(int ac, char **av)
{
    int fd = 0;

    if (ac != 2)
        return (84);
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    solver_function();
    return (0);
}
