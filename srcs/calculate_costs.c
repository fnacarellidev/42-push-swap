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

int		get_position_with_cheapest_cost(t_node *stack_b)
{
	int	cheapest_cost;
	int	cost_to_compare;
	int	cheapest_cost_pos;

	cheapest_cost_pos = 0;
	cheapest_cost = ft_abs(stack_b->cost_a) + ft_abs(stack_b->cost_b);
	while (stack_b != NULL)
	{
		cost_to_compare = ft_abs(stack_b->cost_a) + ft_abs(stack_b->cost_b);
		if (cost_to_compare < cheapest_cost)
		{
			cheapest_cost = cost_to_compare;
			cheapest_cost_pos = stack_b->curr_pos;
		}
		stack_b = stack_b->next;
	}
	return (cheapest_cost_pos);
}

void	set_costs(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp;

	tmp = stack_b;
	while (tmp != NULL)
	{
		tmp->cost_a = calc_cost_a(stack_a, tmp);
		tmp->cost_b = calc_cost_b(stack_b, tmp);
		tmp = tmp->next;
	}
}
