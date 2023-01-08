#include "../include/fdf.h"

int	main(void)
{
	int	y;
	int	count;
	void	*img;
	void	*mlx;
	void	*mlx_win;

	y = 0;
	count = 0;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Hello World!");
	img = mlx_new_image(mlx, 800, 600);
	mlx_put_image_to_window(mlx, mlx_win, img, 100, 100);
	while (count < 50)
	{
		while (y < 50)
		{
			mlx_pixel_put(mlx, mlx_win, 120 + y, 120 + count, 0x00FF0000);
			y++;
		}
		y = 0;
		count++;
		mlx_pixel_put(mlx, mlx_win, 120, 120 + count, 0x00FF00FF);
	}
	mlx_loop(mlx);
	return (0);
}
