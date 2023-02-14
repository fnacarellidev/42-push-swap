/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_costs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:36:08 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/14 03:41:01 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	perform_cost_a(t_node **stack_a, t_node **stack_b)
{
	int	i;

	i = (*stack_b)->cost_a;
	if ((*stack_b)->cost_a > 0)
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
