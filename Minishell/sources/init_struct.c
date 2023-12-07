/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** init_struct
*/
#include "../includes/minishell.h"

main_t *init_struct(int ac, char **av, char **env)
{
    (void)ac;
    (void)av;
    main_t *main = malloc(sizeof(main_t));
    main->env = array_dup(env);
    main->env_c = array_dup(main->env);
    main->test = get_path(env);
    main->path = sep_path(main->test);
    main->input = NULL;
    main->tty = isatty(0);
    main->command = NULL;
    main->builtin = 1;
    main->r_value = 0;
    main->split = NULL;
    main->pipe_a = NULL;
    main->special = 0;

    return (main);
}
