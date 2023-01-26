/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:16:10 by salecler          #+#    #+#             */
/*   Updated: 2023/01/26 18:19:35 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"


char	*ft_get_map(char *filename)
{
	char	*map;
	char	*line;
	int	fd;
	int	i;

	map = malloc(1);
	*map = '\0';
	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("Bad file.");
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		map = ft_strjoin(map, line);
		free(line);
	}
	return (map);
}

int	ft_get_width(char *map)
{
	int	i;
	int	width;

	i = 0;
	width = 0;
	while (map[i] != '\n')
	{
		width++;
		i++;
	}
	return (width);
}

int	ft_get_height(char *map)
{
	int	i;
	int	height;

	i = 0;
	height = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			height++;
		i++;
	}
	return (height);
}
