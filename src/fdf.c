/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:51:33 by salecler          #+#    #+#             */
/*   Updated: 2023/01/08 03:51:41 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	
	ft_strlen("Bonjour");
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Fil de Fer!");
	mlx_pixel_put(mlx, mlx_win, 200, 200, RED);
	mlx_pixel_put(mlx, mlx_win, 400, 400, RED);
	
	mlx_loop(mlx);
	return (0);
}
