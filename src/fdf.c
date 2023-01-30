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

int	main(void)
{
	t_numbers	*head;
	char	*filename = "test";
	int	width;
	int	height;

	head = NULL;
	width = 0;
	height = 0;
	ft_get_map(filename, &head);
	printf("%d", height);
	printf("%d", width);
	return (0);
}
