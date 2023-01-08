#include "../include/fdf.h"

int key_press(int key, void *param) {
  // Check if the key pressed was the Escape key
  if (key == 53) {
    // Close the window
    mlx_destroy_window((void *)param, mlx_get_data_addr(param, &key, &key, &key));
  }
  return (0);
}

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
	
	mlx_key_hook(mlx_win, key_press, (void *)mlx_win);

	mlx_loop(mlx);
	return (0);
}
