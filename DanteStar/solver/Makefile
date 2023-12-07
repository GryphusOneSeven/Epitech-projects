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
	./sources/solver.c\
	main.c

IFLAG = -I ./includes

CFLAGS = -W -Wextra -Werror -Wall -g3

NAME = solver

OBJ = $(SRC:.c=.o)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(IFLAG) $(CFLAGS)

clean:
	find *.o ./lib/my/*.o -delete

fclean: clean
	rm $(NAME)

re: fclean all