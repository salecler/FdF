#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*aux;
	if (!lst)
		return (0);

	aux = lst;
	while (aux->next)
		aux = aux->next;
	return (aux);
}
