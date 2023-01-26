#include "../mlx/mlx.h"
#include "../lib/libft/libft.h"

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

void	*set_window(void);

