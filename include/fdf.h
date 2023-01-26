#include "../mlx/mlx.h"
#include "../lib/libft/libft.h"
#include "../lib/get_next_line/include/get_next_line.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>

#define BLACK 000000
#define WHITE 16777215
#define RED 16711680
#define BLUE 3093151

typedef struct s_data
{
	void *img;
	char	*addr;
	int	bits_per_pixel;
	int	line_length;
	int	endian;
}	t_data;

typedef struct s_node
{
	int	number;
	struct t_node *next;
}	t_node;

void	*set_window(void);

// FDF
char	*ft_get_map(char *filename);
int	ft_get_width(char *map);
int	ft_get_height(char *map);
