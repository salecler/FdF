/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:16:10 by salecler          #+#    #+#             */
/*   Updated: 2023/02/05 13:18:46 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

//void	ft_del_spaces(t_node *node)
//{
//
//
//}

void	ft_get_width(t_node *node)
{
	int	i;

	i = 0;
	while (node->map[0][i])
	{
		if (node->map[0][i] >= '0' && node->map[0][i] <= '9')
		{
			node->width++;
			while (node->map[0][i] >= '0' && node->map[0][i] <= '9')
				i++;
		}
		else
			i++;
	}
}

void	ft_malloc_map(char *filename, t_node *node)
{
	int	fd;
	char	*line;
	char	*concat;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		perror("Bad file.");
	concat = "";
	node->rows = 0;
	node->width = 0;
	while (get_next_line(fd) != NULL)
		node->rows++;
	ft_printf("%d", node->rows);
	close(fd);
	fd = open(filename, O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		concat = ft_strjoin(concat, line);
		free(line);
	}
	node->map = ft_split(concat, '\n');
//	node->map_int = map;
	int	i;
	i = 0;
	while (i < node->rows)
	{
//		printf("%s\n", map[i]);
		i++;
	}
	close(fd);
	ft_get_width(node);
}
