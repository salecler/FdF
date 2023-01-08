#include "../include/fdf.h"

int	main(void)
{
	void	*img;
	void	*mlx;
	void	*mlx_win;
	int i, j;
    	unsigned char r, g, b;
	
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Fil de Fer!");
	img = mlx_new_image(mlx, 800, 600);
	mlx_put_image_to_window(mlx, mlx_win, img, 100, 100);
	
	for (i = 0; i < 800; i++)
   	{
		for (j = 0; j < 600; j++)
		{
			r = (unsigned char)((float)i / 800 * 255);
            		g = (unsigned char)((float)j / 600 * 255);
           		 b = (unsigned char)(((float)i + (float)j) / (800 + 600) * 255);
            		mlx_pixel_put(mlx, mlx_win, i, j, (r << 16) | (g << 8) | b);
        }
    }

	mlx_loop(mlx);
	return (0);
}
