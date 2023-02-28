/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:56:03 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 15:10:02 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

static void	del_first_node(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	if (head)
	{
		if (tmp)
		{
			*head = (*head)->next;
			free(tmp);
		}
	}
}

static int	list_is_empty(int elements)
{
	if (elements == 0)
		return (1);
	return (0);
}

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*copy;
	int		elements;

	elements = list_len(stack_b);
	if (list_is_empty(elements))
		return ;
	copy = new_node((*stack_b)->data);
	copy->idx = (*stack_b)->idx;
	del_first_node(stack_b);
	node_add_front(stack_a, copy);
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*copy;
	int		elements;

	elements = list_len(stack_a);
	if (list_is_empty(elements))
		return ;
	copy = new_node((*stack_a)->data);
	copy->idx = (*stack_a)->idx;
	del_first_node(stack_a);
	node_add_front(stack_b, copy);
}
