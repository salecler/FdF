/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:23:49 by salecler          #+#    #+#             */
/*   Updated: 2022/06/29 21:42:36 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*aux;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	begin = 0;
	end = ft_strlen(s1);
	while ((ft_strchr(set, s1[begin])) != '\0' && (begin < end))
		begin++;
	while ((ft_strchr(set, s1[end])) != '\0' && (begin < end))
		end--;
	aux = (char *)malloc(sizeof(*s1) * end - begin + 1);
	if (!aux)
		return (0);
	i = 0;
	while (begin <= end)
		aux[i++] = s1[begin++];
	aux[i] = '\0';
	return (aux);
}
