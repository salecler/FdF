/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:34:42 by salecler          #+#    #+#             */
/*   Updated: 2023/02/05 13:27:41 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	ft_mlx(t_node *node)
{
	void	*mlx;
	void	*mlx_win;

	node->map[0][0] = '\0';
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Fil de Fer!");

	mlx_loop(mlx);
}
