##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = ./lib/my/my_getnbr.c\
	./lib/my/my_put_nbr.c\
	./lib/my/my_putchar.c\
	./lib/my/my_puterr.c\
	./lib/my/my_putstr.c\
	./lib/my/my_str_isnum.c\
	./lib/my/my_strcapitalize.c\
	./lib/my/my_strcat.c\
	./lib/my/my_strcmp.c\
	./lib/my/my_strdup.c\
	./lib/my/my_strlen.c\
	./lib/my/my_strlowcase.c\
	./lib/my/my_strncat.c\
	./lib/my/my_strncmp.c\
	./lib/my/my_strncpy.c\
	./lib/my/my_strupcase.c\
	./lib/my/my_swap.c\
	./sources/create_tab.c\
	./sources/check_direction.c\
	./sources/init_direction.c\
	./sources/move_curr.c\
	./sources/break_wall.c\
	./sources/init_positions.c\
	./sources/check_posibilities.c\
	./sources/random_break.c\
	./sources/movement_random.c\
	./sources/end_maze.c\
	./sources/check_info.c\
	./sources/free_tab.c\
	./sources/print_tab.c\
	main.c

IFLAG = -I ./includes

CFLAGS = -W -Wextra -Werror -Wall -g3

NAME = generator

OBJ = $(SRC:.c=.o)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(IFLAG) $(CFLAGS)

clean:
	find *.o ./lib/my/*.o ./sources/*.o -delete

fclean: clean
	rm $(NAME)

re: fclean all