/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_costs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:36:08 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/14 12:53:27 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	perform_cost_a(t_node **stack_a, int cost_a)
{
	int	i;

	i = cost_a;
	if (cost_a > 0)
	{
		while (i > 0)
		{
			rotate_a(stack_a);
			i--;
		}
	}
	else
	{
		while (i < 0)
		{
			rev_rotate_a(stack_a);
			i++;
		}
	}
}

void	perform_cost_b(t_node **stack_b, int cost_b)
{
	int	i;

	i = cost_b;
	if (cost_b > 0)
	{
		while (i > 0)
		{
			rotate_b(stack_b);
			i--;
		}
	}
	else
	{
		while (i < 0)
		{
			rev_rotate_b(stack_b);
			i++;
		}
	}
}

void	perform_cheapest_action(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;
	int		cheapest_cost_pos;

	tmp = *stack_b;
	cheapest_cost_pos = get_position_with_cheapest_cost(*stack_b);
	while (tmp->curr_pos != cheapest_cost_pos)
		tmp = tmp->next;
	if (tmp->cost_a != 0)
		perform_cost_a(stack_a, tmp->cost_a);
	if (tmp->cost_b != 0)
		perform_cost_b(stack_b, tmp->cost_b);
	push_a(stack_a, stack_b);
}
