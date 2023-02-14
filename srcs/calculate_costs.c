/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_costs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:44:40 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/14 05:01:15 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	calc_cost_a(t_node *stack_a, t_node *node_b)
{
	int	size_stack_a;

	size_stack_a = list_len(&stack_a);
	if (node_b->target_pos <= size_stack_a / 2)
		return (node_b->target_pos);
	return (node_b->target_pos - size_stack_a);
}

static int	calc_cost_b(t_node *stack_b, t_node *node_b)
{
	int	size_stack_b;

	size_stack_b = list_len(&stack_b);
	if (node_b->curr_pos <= size_stack_b / 2)
		return (node_b->curr_pos);
	return (node_b->curr_pos - size_stack_b);
}
