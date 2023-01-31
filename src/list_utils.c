
#include "../include/fdf.h"

void	add_node(t_numbers **head, char *line)
{
	t_numbers	*new_node;
	t_numbers	*temp;
	char	**nums;
	int	i;

	new_node = malloc(sizeof(t_numbers));
	if (!new_node)
		return ;
	nums = ft_split(line, ' ');
	i = 0;
	while (nums[i])
		i++;
	new_node->number = (int *)malloc(sizeof(int) * i);
	if (!new_node->number)
		return ;
	i = 0;
	while (nums[i])
	{
		new_node->number[i] = ft_atoi(nums[i]);
		i++;
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	print_list(head);
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
