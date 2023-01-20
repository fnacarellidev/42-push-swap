/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:48:04 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/19 23:11:55 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int		list_is_empty(int elements)
{
	return (elements);
}

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*copy;
	int		elements;

	elements = list_len(stack_b);
	if (!list_is_empty(elements))
	{
		write(1, "Can't push_a, stack_b is empty.\n", 32);
		return ;
	}
	copy = new_node((*stack_b)->data);
	del_first_node(stack_b);
	node_add_front(stack_a, copy);
}
