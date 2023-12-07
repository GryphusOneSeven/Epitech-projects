/*
** EPITECH PROJECT, 2022
** B-PSU-210-RUN-2-1-minishell2-gael.edmond
** File description:
** pipe2
*/
#include "../includes/minishell.h"

void child_function(int *pipefd, main_t *shell)
{
    close(pipefd[0]);
    dup2(pipefd[1], 1);
    shell->split = new_put_in_array(shell->pipe_a[0]);
    check_builtin(shell);
    check_builtin2(shell);
    if (shell->builtin == 1) {
        fork_it(shell);
    }
    exit(0);
}

void parent_function(int *pipefd, pid_t pid, main_t *shell)
{
    pid = fork();
    if (pid == 0) {
        wait(NULL);
        close(pipefd[1]);
        dup2(pipefd[0], 0);
        shell->split = new_put_in_array(shell->pipe_a[1]);
        check_builtin(shell);
        check_builtin2(shell);
        if (shell->builtin == 1) {
            fork_it(shell);
        }
    }
    wait(NULL);
}
