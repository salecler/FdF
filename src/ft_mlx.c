/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:34:42 by salecler          #+#    #+#             */
/*   Updated: 2023/02/07 14:25:19 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	ft_lines_drawing(void *mlx, void *mlx_win, t_node *node)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < (node->rows * PIXEL_SIZE))
	{
		while (x < (node->width * PIXEL_SIZE) - PIXEL_SIZE)
		{
			mlx_pixel_put(mlx, mlx_win, 200 + x, 200 + y, BLUE);
			mlx_pixel_put(mlx, mlx_win, 200 + (y * 2), 200 + (x / 2), WHITE);
			x++;
		}
		x = 0;
		y += PIXEL_SIZE;
	}
}

void	ft_mlx(t_node *node)
{
	void	*mlx;
	void	*mlx_win;
	int	y;
	int	x;
	int	x_pixel;
	int	y_pixel;

	y = 0;
	x = 0;
	x_pixel = 0;
	y_pixel = 0;
	node->map[0][0] = '\0';
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1280, 720, "Fil de Fer!");
	ft_lines_drawing(mlx, mlx_win, node);
	while (y < node->rows)
	{
		while (x < node->width)
		{
			mlx_pixel_put(mlx, mlx_win, 200 + x_pixel, 200 + y_pixel, RED);
			x_pixel += PIXEL_SIZE;
			x++;
		}
		x = 0;
		x_pixel = 0;
		y++;
		y_pixel += PIXEL_SIZE;
	}
	mlx_loop(mlx);
}
