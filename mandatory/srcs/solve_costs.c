/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_costs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:49:27 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 20:08:47 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	solve_both(t_node **stk_a, int *acost, t_node **stk_b, int *bcost)
{
	if (*acost > 0 && *bcost > 0)
	{
		while (*acost > 0 && *bcost > 0)
		{
			rr(stk_a, stk_b);
			(*acost)--;
			(*bcost)--;
		}
	}
	if (*acost < 0 && *bcost < 0)
	{
		while (*acost < 0 && *bcost < 0)
		{
			rrr(stk_a, stk_b);
			(*acost)++;
			(*bcost)++;
		}
	}
}

void	solve_cost_a(t_node **stack_a, int cost_a)
{
	int	i;

	i = cost_a;
	if (cost_a > 0)
	{
		while (i > 0)
		{
			rotate_a(stack_a, 0);
			i--;
		}
	}
	else
	{
		while (i < 0)
		{
			rev_rotate_a(stack_a, 0);
			i++;
		}
	}
}

void	solve_cost_b(t_node **stack_b, int cost_b)
{
	int	i;

	i = cost_b;
	if (cost_b > 0)
	{
		while (i > 0)
		{
			rotate_b(stack_b, 0);
			i--;
		}
	}
	else
	{
		while (i < 0)
		{
			rev_rotate_b(stack_b, 0);
			i++;
		}
	}
}
