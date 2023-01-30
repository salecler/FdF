#include "../mlx/mlx.h"
#include "../lib/libft/libft.h"
#include "../lib/get_next_line/include/get_next_line.h"
#include "../lib/ft_printf/include/ft_printf.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>

#define BLACK 000000
#define WHITE 16777215
#define RED 16711680
#define BLUE 3093151

typedef struct s_node
{
	char	**map;
	struct	t_node *next;
}	t_node;

typedef struct s_numbers
{
	int	*number;
	struct s_numbers *next;
}	t_numbers;

void	*set_window(void);

// FDF
void	ft_get_map(char *filename, t_numbers **head);

void	add_node(t_numbers **head, char *line);
void	print_list(t_numbers **head);
