#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	t_list	*aux;

	aux = *lst;
	while (aux->next)
		aux = aux->next;
	aux->next = new;
}
