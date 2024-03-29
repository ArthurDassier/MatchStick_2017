##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## a_makefile_for_projetcs
##

CC	=	gcc -g3

RM	=	rm -rf

CFLAGS	+=	-Wall -Wextra

CFLAGS	+=	-I./include

NAME	=	matchstick

SRCS	=	srcs/brain.c		\
		srcs/fcts_while.c	\
		srcs/create_map.c	\
		srcs/get_next_line.c	\
		srcs/error_gest.c	\
		srcs/win_n_def.c	\
		srcs/robot.c		\

OBJS	=	$(SRCS:.c=.o)

LIB =		-L./lib -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my
	$(CC) $(OBJS) -o $(NAME) $(LIB)

clean:
	$(RM) $(OBJS)
	make -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(RM) lib/*.a
	make -C ./lib/my fclean


re: fclean all

.PHONY: all clean fclean re
