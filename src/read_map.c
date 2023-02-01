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

char	**ft_malloc_map(char *filename, t_node **node, int width)
{
	int	rows;
	int	fd;
	char	**map;
	char	*line;
	char	*concat;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		perror("Bad file.");
	concat = "";
	rows = 0;
	while (get_next_line(fd) != NULL)
		rows++;
	map = malloc(rows * sizeof(char *));
	close(fd);
	fd = open(filename, O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		concat = ft_strjoin(concat, line);
		free(line);
	}
	map = ft_split(concat, '\n');
	int	i;
	i = 0;
	while (i < rows)
	{
		printf("%s\n", map[i]);
		i++;
	}
	close(fd);
	width = ft_strlen_lib(map[0]);
	*node = new_node(rows, width);
	return (map);
}
