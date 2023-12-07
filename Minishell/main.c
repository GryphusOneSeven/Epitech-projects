/*
** EPITECH PROJECT, 2022
** NEW
** File description:
** main
*/
#include "./includes/minishell.h"

int fork_it(main_t *shell)
{
    int status = 0;
    pid_t pid = 0;

    pid = fork();
    if (pid == 0) {
        shell->test = get_path(shell->env_c);
        shell->path = sep_path(shell->test);
        if (execute_path(shell) == 0)
            execute(shell);
        exit(84);
    } else {
        waitpid(pid, &status, WUNTRACED);
        if (status != 0) {
            signals(status);
            shell->r_value = 84;
        }
    }
    return (shell->r_value);
}

void loop_in_loop_in_loop(main_t *shell, int i)
{
    shell->split = new_put_in_array(shell->split1[i]);
    check_builtin(shell);
    check_builtin2(shell);
    if (shell->builtin == 1) {
        fork_it(shell);
    }
}

void loop_in_loop(main_t *shell)
{
    for (int i = 0; shell->split1[i] != NULL; i++) {
        shell->special = 0;
        check_redirection(shell);
        check_pipe(shell);
        check_double_redirection(shell);
        if (shell->special == 1)
            do_the_redirect(shell, i);
        if (shell->special == 2)
            step_into_the_pipe(shell, i);
        if (shell->special == 3)
            do_the_double_redirect(shell, i);
        if (shell->special == 0)
            loop_in_loop_in_loop(shell, i);
    }
}

void main_loop(main_t *shell)
{
    while (1) {
        if (shell->tty == 1)
            my_printf("$> ");
        if (getline(&shell->input, &shell->size, stdin) == -1)
            break;
        if (shell->input[0] == '\n' || input_handling(shell->input) == 1)
            continue;
        shell->split1 = split_semicolon(shell->input);
        loop_in_loop(shell);
    }
}

int main(int ac, char **av, char **env)
{
    int r = 0;
    main_t *shell = init_struct(ac, av, env);
    main_loop(shell);
    r = shell->r_value;
    free(shell);
    return (r);
}
