/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** execute
*/
#include "../includes/minishell.h"

int execute_path(main_t *shell)
{
    struct stat filestat;

    stat(shell->split[0], &filestat);
    if (S_ISDIR(filestat.st_mode)) {
        error_output(shell->split[0], 7);
        return (1);
    }
    if (access(shell->split[0], X_OK) == 0) {
        execve(shell->split[0], shell->split, shell->env_c);
    }
    return (0);
}

void execute_process(main_t *shell)
{
    int i = 0;
    int size = 0;
    char *command = NULL;

    if (shell->path == NULL)
        return;
    while (shell->path[i] != NULL) {
        size = my_strlen(shell->path[i]) + my_strlen(shell->split[0]);
        command = malloc(sizeof(char) * size);
        command = my_strdup_cat(shell->path[i], "/", size);
        command = my_strdup_cat(command, shell->split[0], size);
        if (access(command, X_OK) == 0) {
            execve(command, shell->split, shell->env_c);
            break;
        }
        i++;
    }
}

int execute(main_t *shell)
{
    if (shell->path == NULL) {
        error_output(shell->split[0], 0);
        return (84);
    }
    execute_process(shell);
    if (access(shell->split[0], X_OK) != 0) {
        error_output(shell->split[0], 0);
        return (84);
    }
    return (0);
}
