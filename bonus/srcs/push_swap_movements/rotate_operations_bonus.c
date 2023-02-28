/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:09:05 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 15:09:51 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

void	rotate_a(t_node **stack_a)
{
	int		elements;
	t_node	*first_node;

	elements = list_len(stack_a);
	if (elements < 2)
		return ;
	first_node = *stack_a;
	*stack_a = (*stack_a)->next;
	first_node->next = NULL;
	node_add_back(stack_a, first_node);
}

void	rotate_b(t_node **stack_b)
{
	int		elements;
	t_node	*first_node;

	elements = list_len(stack_b);
	if (elements < 2)
		return ;
	first_node = *stack_b;
	*stack_b = (*stack_b)->next;
	first_node->next = NULL;
	node_add_back(stack_b, first_node);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
