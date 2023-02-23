/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_costs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:36:08 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/23 20:09:13 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
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

void	perform_cheapest_action(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	int		cheapest_cost_pos;

	tmp = *stack_b;
	cheapest_cost_pos = get_position_with_cheapest_cost(*stack_b);
	while (tmp->curr_pos != cheapest_cost_pos)
		tmp = tmp->next;
	if (tmp->cost_a != 0 && tmp->cost_b != 0)
		solve_both(stack_a, &(tmp->cost_a), stack_b, &(tmp->cost_b));
	if (tmp->cost_a != 0)
		solve_cost_a(stack_a, tmp->cost_a);
	if (tmp->cost_b != 0)
		solve_cost_b(stack_b, tmp->cost_b);
	push_a(stack_a, stack_b);
}
