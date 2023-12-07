##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Make file
##

SRC = main.c\
	./sources/free_all.c\
	./sources/free_all2.c\
	./sources/create_hero.c\
	./sources/create_title.c\
	./sources/create_window.c\
	./sources/create_button.c\
	./sources/analyse_events.c\
	./sources/create_background.c\
	./sources/init_main_struct.c\
	./sources/start_n_stop.c\
	./sources/menu_function.c\
	./sources/game_function.c\
	./sources/hero_inputs.c\
	./sources/clock_for_rect.c\
	./sources/move_rect.c\
	./sources/create_map.c\
	./sources/create_bgm.c\
	./sources/battle_function.c\
	./sources/create_enemies.c\
	./sources/bgm_handling.c\
	./sources/cavern_functions.c\
	./sources/village_functions.c\
	./sources/castle_functions.c\
	./sources/create_text.c\
	./sources/loading_function.c\
	./sources/create_stats.c\
	./sources/my_putnbr_in_str.c\
	./sources/put_stat_in_text.c\
	./sources/battle_function2.c\
	./sources/create_pnj.c\
	./sources/quest_function.c

LFLAG = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

IFLAG = -I ./includes

CFLAGS = -W -Wextra -Werror -Wall $(LFLAG) -g3

OBJ = $(SRC:.c=.o)

NAME = my_rpg

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(IFLAG) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all
