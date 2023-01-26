/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:51:33 by salecler          #+#    #+#             */
/*   Updated: 2023/01/25 15:08:05 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	int	x, y, t;

	x = 0;
	y = 0;
	t = 0;
	ft_strlen("Bonjour");
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Fil de Fer!");
	while (x < 200)
	{
		if (x == 199)
		{
			x = 0;
			y = 0;
			while (x > -200)
			{
				mlx_pixel_put(mlx, mlx_win, 200 - x, 400 - y, BLUE);
				x--;
				y++;
			}
			break;
		}
		mlx_pixel_put(mlx, mlx_win, 200 + x, 200 + y, RED);
		x++;
		y++;
	}
	while (t < 200)
	{
		mlx_pixel_put(mlx, mlx_win, 200 + t, 200, WHITE);
		mlx_pixel_put(mlx, mlx_win, 200 + t, 400, WHITE);
		mlx_pixel_put(mlx, mlx_win, 200, 200 + t, WHITE);
		mlx_pixel_put(mlx, mlx_win, 400, 200 + t, WHITE);
		t++;
	}
	mlx_pixel_put(mlx, mlx_win, 300, 300, WHITE);
	mlx_loop(mlx);
	return (0);
}
