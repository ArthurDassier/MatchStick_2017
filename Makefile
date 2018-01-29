##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/brain.c		\
		srcs/fcts_while.c	\
		srcs/create_map.c	\
		srcs/get_next_line.c	\
		srcs/error_gest.c	\
		srcs/win_n_def.c	\

OBJ	=	$(SRC:.c = .o)

NAME	=	matchstick

LIB_DIR	=	./lib

MY.H_DIR	=	./include

CC	=	gcc -g3

C_FLAGS	=	-Wall -Wextra

LIB_FLAG	=	-L$(LIB_DIR) -lmy

INCL_FLAG	=	-I$(MY.H_DIR)

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C lib/my
		$(CC) -o $(NAME) $(OBJ) $(C_FLAGS) $(LIB_FLAG) $(INCL_FLAG)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all re clean
