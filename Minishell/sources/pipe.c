/*
** EPITECH PROJECT, 2022
** B-PSU-210-RUN-2-1-minishell2-gael.edmond
** File description:
** pipe
*/
#include "../includes/minishell.h"

char **split_pipe(char *str)
{
    int i = 1;
    int size = new_count_words(str, "|");
    char **new = malloc(sizeof(char *) * (size + 1));

    new[0] = strtok(str, "|\n");
    while (i != size) {
        new[i] = strtok(NULL, "|\n");
        i = i + 1;
    }
    new[i] = NULL;
    return (new);
}

int check_pipe_further(main_t *shell, int *j, int i)
{
    while (shell->split1[i][*j] != '\0') {
        if (shell->split1[i][*j] == '|') {
            return (0);
        }
        (*j)++;
    }
    return (1);
}

int check_pipe(main_t *shell)
{
    int i = 0;
    int j = 0;

    while (shell->split1[i] != NULL) {
        if (check_pipe_further(shell, &j, i) == 0) {
            shell->special = 2;
            return (0);
        }
        i++;
    }
    return (1);
}

int step_into_the_pipe(main_t *shell, int i)
{
    int pipefd[2];
    pid_t pid = 0;

    if (pipe(pipefd) == -1) {
        my_puterr("Error with pipe\n");
        return (1);
    }
    shell->pipe_a = split_pipe(shell->split1[i]);
    pid = fork();
    if (pid == 0)
        child_function(pipefd, shell);
    else
        parent_function(pipefd, pid, shell);
    return (0);
}
