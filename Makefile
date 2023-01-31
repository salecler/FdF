

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2
MLX = -Lmlx mlx/libmlx.a -lglfw -L /opt/homebrew/Cellar/glfw/3.3.8/lib -framework OpenGL -framework AppKit
NAME = fdf
SRC = 	src/fdf.c\
      	lib/libft/ft_strlen.c\
	src/read_map.c\
	lib/get_next_line/src/get_next_line.c\
	lib/get_next_line/src/get_next_line_utils.c\
	lib/libft/ft_strjoin.c\
	lib/libft/ft_split.c\
	lib/libft/ft_atoi.c\
	lib/libft/ft_strdup.c\
	lib/ft_printf/src/ft_printf.c\
	lib/ft_printf/src/ft_printf_utils.c\
	lib/ft_printf/src/ft_format.c\
	src/list_utils.c
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
