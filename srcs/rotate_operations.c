/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:21:37 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/20 09:37:48 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	rotate_a(t_node **stack_a)
{
	int		elements;
	t_node	*first_node;

	elements = list_len(stack_a);
	if (elements < 2)
	{
		write(1, "Can't rotate_a, stack_a has less than two elements.\n", 52);
		return ;
	}
	first_node = *stack_a;
	*stack_a = (*stack_a)->next;
	first_node->next = NULL;
	node_add_back(stack_a, first_node);
}
