/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** cd_builtin
*/
#include "../includes/minishell.h"

int check_special_dest(main_t *shell)
{
    if (my_strcmp("-", shell->split[1]) == 0) {
        shell->r_value = cd_minus(shell);
        return (shell->r_value);
    }
    if (my_strcmp("~", shell->split[1]) == 0) {
        my_printf("He want to go home\n");
        return (0);
    }
    return (1);
}

int error_cd(main_t *shell)
{
    struct stat filestat;

    stat(shell->split[1], &filestat);
    if (access(shell->split[1], F_OK) != 0) {
        error_output(shell->split[1], 8);
        return (84);
    }
    if (access(shell->split[1], R_OK) != 0) {
        error_output(shell->split[1], 7);
        return (84);
    }
    if (!S_ISDIR(filestat.st_mode)) {
        error_output2(shell->split[1], 9);
        return (84);
    }
    return (0);
}

int cd_builtin(main_t *shell)
{
    int size = count_elements(shell->split);

    if (size == 1) {
        my_printf("He wants to go home\n");
        return (0);
    }
    if (size > 2) {
        error_output("cd", 1);
        return (84);
    }
    if (check_special_dest(shell) == 1) {
        if (error_cd(shell) == 84)
            return (84);
        change_dir(shell);
    }
    return (shell->r_value);
}
