##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = ./sources/array_dup.c\
	./sources/cd_builtin.c\
	./sources/cd_builtin2.c\
	./sources/cd_builtin3.c\
	./sources/char_isalpha.c\
	./sources/check_builtin.c\
	./sources/clean_n_dup_str.c\
	./sources/count_words.c\
	./sources/env_builtin.c\
	./sources/execute.c\
	./sources/exit_builtin.c\
	./sources/free_arr.c\
	./sources/get_path.c\
	./sources/handle_signals.c\
	./sources/init_struct.c\
	./sources/input_handling.c\
	./sources/my_getnbr.c\
	./sources/my_puterr.c\
	./sources/my_str_isalphanum.c\
	./sources/my_str_isnum.c\
	./sources/my_strcat.c\
	./sources/my_strcmp.c\
	./sources/my_strcpy.c\
	./sources/my_strdup.c\
	./sources/my_strlen.c\
	./sources/my_strncmp.c\
	./sources/my_strndup.c\
	./sources/new_put_in_array.c\
	./sources/print_arg.c\
	./sources/print_array.c\
	./sources/put_in_array.c\
	./sources/setenv_builtin.c\
	./sources/setenv_check.c\
	./sources/setenv_puts.c\
	./sources/unsetenv_builtin.c\
	./sources/printf/cflag.c\
	./sources/printf/dflag.c\
	./sources/printf/iflag.c\
	./sources/printf/my_printf.c\
	./sources/printf/my_put_nbr.c\
	./sources/printf/my_putchar.c\
	./sources/printf/my_putstr.c\
	./sources/printf/sflag.c\
	./sources/printf/test_char.c\
	./sources/semicolon.c\
	./sources/pipe.c\
	./sources/pipe2.c\
	./sources/redirect.c\
	./sources/double_redirect.c\
	main.c

IFLAG = -I ./includes

CFLAGS = -W -Wextra -Werror -Wall -g3

NAME = mysh

OBJ = $(SRC:.c=.o)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(IFLAG) $(CFLAGS)

clean:
	find *.o ./sources/*.o ./sources/printf/*.o -delete

fclean: clean
	rm $(NAME)

re: fclean all
