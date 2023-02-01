/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:51:33 by salecler          #+#    #+#             */
/*   Updated: 2023/01/26 18:17:02 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int	main(int ac, char **av)
{
	t_node	*node;
	char	*filename = av[1];
	char	**map;
	int	width;

	if (ac < 2)
	{
		perror("Not enough arguments.");
		return (1);
	}
	node = NULL;
	width = 0;
	map = ft_malloc_map(filename, &node, width);
	ft_printf("map[0][0] = %c\n", map[0][0]);
	ft_printf("%d\n", node->rows);
	ft_printf("%d\n", node->width);
	return (0);
}
