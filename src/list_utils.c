
#include "../include/fdf.h"

t_node	*new_node(int rows, int width)
{
	t_node	*values = malloc(sizeof(t_node));
	values->rows = rows;
	values->width = width;
	values->next = NULL;
	return (values);
}

void	print_list(t_numbers **head)
{
	t_numbers *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
	}
}
