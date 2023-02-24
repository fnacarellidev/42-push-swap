/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:21:37 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 12:41:03 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

void	rotate_a(t_node **stack_a, int called_from_rr)
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
	if (!called_from_rr)
		write(1, "ra\n", 3);
}

void	rotate_b(t_node **stack_b, int called_from_rr)
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
	if (!called_from_rr)
		write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate_a(stack_a, 1);
	rotate_b(stack_b, 1);
	write(1, "rr\n", 3);
}
