

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2
MLX = -Lmlx -framework OpenGL -framework AppKit
NAME = fdf
SRC = src/fdf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
