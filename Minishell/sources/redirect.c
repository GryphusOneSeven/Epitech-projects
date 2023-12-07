/*
** EPITECH PROJECT, 2022
** B-PSU-210-RUN-2-1-minishell2-gael.edmond
** File description:
** redirect
*/
#include "../includes/minishell.h"

char **split_redirect(char *str)
{
    int i = 1;
    int size = new_count_words(str, ">");
    char **new = malloc(sizeof(char *) * (size + 1));

    new[0] = strtok(str, ">\n");
    while (i != size) {
        new[i] = strtok(NULL, "> \n");
        i = i + 1;
    }
    new[i] = NULL;
    return (new);
}

void do_the_redirect(main_t *shell, int i)
{
    char *str = my_strdup(shell->split1[i]);
    char **redirect_a = split_redirect(str);
    int fd = 0;
    int save_std = 0;

    shell->split = new_put_in_array(redirect_a[0]);
    fd = open(redirect_a[1], O_CREAT|O_TRUNC|O_RDWR, 0755);
    save_std = dup(1);
    dup2(fd, 1);
    check_builtin(shell);
    check_builtin2(shell);
    if (shell->builtin == 1) {
        fork_it(shell);
    }
    close(fd);
    dup2(save_std, 1);
}

int check_further_redirection(main_t *shell, int i, int *j)
{
    while (shell->split1[i][*j] != '\0') {
        if (shell->split1[i][*j] == '>') {
            return (0);
        }
        (*j)++;
    }
    return (1);
}

int check_redirection(main_t *shell)
{
    int i = 0;
    int j = 0;

    while (shell->split1[i] != NULL) {
        if ((check_further_redirection(shell, i, &j)) == 0) {
            shell->special = 1;
            return (0);
        }
        i++;
    }
    return (1);
}
