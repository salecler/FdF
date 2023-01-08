#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *new;
	int	len;

	new = lst;
	len = 0;
	while (new)
	{
		len++;
		new = new->next;
	}
	return (len);
}
