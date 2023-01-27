/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:48:04 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/27 18:44:27 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

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
	{
		write(1, "Can't push_a, stack_b is empty.\n", 32);
		return ;
	}
	copy = new_node((*stack_b)->data);
	del_first_node(stack_b);
	node_add_front(stack_a, copy);
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*copy;
	int		elements;

	elements = list_len(stack_a);
	if (list_is_empty(elements))
	{
		write(1, "Can't push_b, stack_a is empty.\n", 32);
		return ;
	}
	copy = new_node((*stack_a)->data);
	del_first_node(stack_a);
	node_add_front(stack_b, copy);
}
