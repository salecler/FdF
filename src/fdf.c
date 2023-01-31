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
	char	*filename = "42.fdf";

	head = NULL;
	ft_get_map(filename, &head);
	ft_malloc_map(filename);
	return (0);
}
