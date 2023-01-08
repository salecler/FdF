#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (!lst)
		return ;
	aux = lst;
	while (aux)
	{
		(*f)(aux->content);
		aux = aux->next;
	}
}
