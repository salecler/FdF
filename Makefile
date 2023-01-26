

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2
MLX = -Lmlx mlx/libmlx.a -lglfw -L ~/.brew/opt/glfw/lib -framework OpenGL -framework AppKit
NAME = fdf
SRC = src/fdf.c\
      lib/libft/ft_strlen.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX)
	@./$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
