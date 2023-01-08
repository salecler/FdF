#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*lst2;
	t_list	*tmp;

	aux = lst;
	lst2 = NULL;
	while (aux)
	{
		tmp = ft_lstnew((*f)(aux->content));
		if (!tmp)
		{
			while (lst2)
			{
				tmp = lst2;
				(*del)(lst2->content);
				free(lst2);
				lst2 = tmp;
			}
		}
		ft_lstadd_back(&lst2, tmp);
		aux = aux->next;
	}
	return (lst2);
}
