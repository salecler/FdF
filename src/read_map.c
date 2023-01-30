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


void	ft_get_map(char *filename, t_numbers **head)
{
	char	*line;
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("Bad file.");
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		add_node(head, line);
		free(line);
	}
}
