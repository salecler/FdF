/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:51:33 by salecler          #+#    #+#             */
/*   Updated: 2023/02/07 14:30:03 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	main(int ac, char **av)
{
	t_node	*node;
	char	*filename = av[1];

	if (ac < 2)
	{
		perror("Not enough arguments.");
		return (1);
	}
	node = malloc(sizeof(t_node));
	ft_malloc_map(filename, node);
	ft_printf("rows=%d\n", node->rows);
	ft_printf("width=%d\n", node->width);
	ft_mlx(node);
	return (0);
}
