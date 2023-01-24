#include "../include/fdf.h"

void	*set_image(

void	*set_window(void)
{
	int	x;
	int	y;
	void	*mlx;
	void	*mlx_win;

	x = 0;
	y = 0;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Fil de Fer !");
}
