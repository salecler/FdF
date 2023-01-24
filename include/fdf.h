#include "../mlx/mlx.h"
#include "../lib/libft/libft.h"

#include <math.h>

#define RED 16711680

typedef struct s_data
{
	void *img;
	char	*addr;
	int	bits_per_pixel;
	int	line_length;
	int	endian;
}	t_data;

void	*set_window(void);

