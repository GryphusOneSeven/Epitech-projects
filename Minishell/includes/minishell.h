/*
** EPITECH PROJECT, 2022
** minishell.h
** File description:
** minishell header
*/

#ifndef MINISHELL_H_
    #define MINISHELL_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <signal.h>
    #include <sys/wait.h>
    #include <string.h>

typedef struct main {
    char **env;
    char **env_c;
    char **path;
    char *test;
    char *input;
    char *command;
    int builtin;
    int tty;
    int r_value;
    char **split;
    char **split1;
    char **pipe_a;
    int special;
    size_t size;
}main_t;

int my_strlen(char const *str);
char *my_strdup_cat(char *dest, char *src, int size);
char *my_strcat(char *dest, char const *src);
void print_environment(char **env);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_strdup(char const *src);
void print_arg(char **arg);
char *my_strndup(char const *source, int n);
int count_elements(char **array);
char **my_str_to_word_array(char const *str);
int my_printf(const char *format, ...);
char *get_path(char **environ);
char **sep_path(char *path);
char **put_in_array(char *str, char *delim);
int new_count_words(char *str, char *sep);
char *clean_n_dup_str(char *in);
void my_puterr(char *str);
void free_array(char **array);
char **array_dup(char **array);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char *search, char *in, int lenght);
void print_array(char **array);
int char_is_alpha(char c);
int my_str_isalphanum(char *str);
int my_strcmp(char *search, char *in);
int my_getnbr(char const *str);
int my_str_isnum(char const *str);

main_t *init_struct(int ac, char **av, char **env);
void launch_command(main_t *shell);
int check_input(char *input);
int check_existing(main_t *shell, char *name);
void check_builtin(main_t *shell);
void check_builtin2(main_t *shell);
void new_check_builtin(main_t *shell);
void env_builtin(main_t *shell);
int setenv_builtin(main_t *shell, char **arr);
int unsetenv_builtin(main_t *shell, char **arr);
int input_handling(char *str);
int exit_builtin(main_t *shell);

int check_further(char *search, char *in);
char **new_put_in_array(char *str);
char **array_cpy(char **dest, char **src);
char **array_cpy_skip(char **dest, char **src, int pos);
void error_output(char *str, int i);
void error_output2(char *str, int i);
int execute_path(main_t *shell);
int execute(main_t *shell);
void replace_value(main_t *shell, char *name, int pos);
char **create_new(main_t *shell, char *name);
char **create_full(main_t *shell, char *name);
void signals(int s);
int cd_builtin(main_t *shell);
int count_till_equal(char *str);
void change_dir(main_t *shell);
int get_to_oldpwd(main_t *shell);
int cd_minus(main_t *shell);
void change_pwd(main_t *shell, char *name, int pos);
int get_to_pwd(main_t *shell);
int check_semicolon(char *str, main_t *shell);
int fork_it(main_t *shell);
void semicolon_function(main_t *shell);
int check_redirection(main_t *shell);
char **split_semicolon(char *str);
int check_pipe(main_t *shell);
void pipe_function(main_t *shell, int i);
int step_into_the_pipe(main_t *shell, int i);
void child_function(int *pipefd, main_t *shell);
void parent_function(int *pipefd, pid_t pid, main_t *shell);
void redirect_function(main_t *shell, int i);
void do_the_redirect(main_t *shell, int i);
char *clean_str(char *str);
int check_double_redirection(main_t *shell);
void do_the_double_redirect(main_t *shell, int i);

#endif
