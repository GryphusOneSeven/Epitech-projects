/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-gael.edmond
** File description:
** setenv_builtin
*/
#include "../includes/minishell.h"

int count_till_equal(char *str)
{
    int i = 0;

    while (str[i] != '=') {
        i++;
    }
    if (str[i] == '=')
        i = i + 1;
    return (i);
}

void change_value(main_t *shell, char *name, int pos)
{
    int lenght = count_till_equal(shell->env_c[pos]);
    char *line = my_strndup(shell->env_c[pos], lenght);
    int size = my_strlen(shell->env_c[pos] + my_strlen(name) + 1);
    char *full = my_strdup_cat(line, name, size);

    shell->env_c[pos] = my_strdup(full);
    free(line);
    free(full);
}

int put_single_element(main_t *shell, char **arr)
{
    int exist = check_existing(shell, arr[1]);

    if (arr[1] == NULL)
        return (1);
    if (exist == -1) {
        shell->env_c = create_new(shell, arr[1]);
        return (0);
    }
    if (exist != -1) {
        replace_value(shell, arr[1], exist);
        return (0);
    }
    return (0);
}

int put_element(main_t *shell, char **arr)
{
    int exist = check_existing(shell, arr[1]);
    char *str = NULL;

    if (exist == -1) {
        str = my_strdup_cat(arr[1], "=", (my_strlen(arr[1]) + 1));
        str = my_strdup_cat(str, arr[2],\
        (my_strlen(arr[2]) + (my_strlen(str) + 1)));
        shell->env_c = create_full(shell, str);
    }
    if (exist != -1) {
        change_value(shell, arr[2], exist);
        return (0);
    }
    return (0);
}

int setenv_builtin(main_t *shell, char **arr)
{
    int size = count_elements(arr);
    int err = check_input(arr[1]);

    if (arr[1] == NULL)
        print_array(shell->env_c);
    if (err == 1)
        return (84);
    if (size > 3) {
        error_output("setenv", 1);
        return (84);
    }
    if (size == 2)
        put_single_element(shell, arr);
    if (size == 3)
        put_element(shell, arr);
    return (0);
}
