NAME = matrix.a
CC = cc
FLAGS = -Wall -Wextra -Werror -g

HEADER_DIR = inc/
LIBFT_DIR = libft/
HEADER = matrix.h
SRC = matrix.c main.c
OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.c=%.o))

SRC_DIR = src/
OBJ_DIR = .obj/

.PHONY = all clean fclean re lib

all:	lib $(NAME)

lib:
	$(MAKE) -C $(LIBFT_DIR)
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADER_DIR)$(HEADER)| $(OBJ_DIR)
	echo Compiling $< to $@
	$(CC) $(FLAGS) -c $< -I$(HEADER_DIR) -I$(LIBFT_DIR) -o $@
