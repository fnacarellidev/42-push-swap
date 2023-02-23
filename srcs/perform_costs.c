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

{

	{
		{
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
