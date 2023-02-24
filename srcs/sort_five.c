/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:10:52 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 17:19:41 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	fix_five(t_node **stack_a, t_node **stack_b)
{
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if ((*stack_a)->idx == 5)
		rotate_a(stack_a, 0);
	else
	{
		swap_a(stack_a);
		rotate_a(stack_a, 0);
	}
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int		min_idx;
	int		max_idx;

	min_idx = 1;
	max_idx = 5;
	while (list_len(stack_b) < 2)
	{
		if ((*stack_a)->idx == min_idx || (*stack_a)->idx == max_idx)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a, 0);
	}
	if (!is_sorted(*stack_a))
		sort_three(stack_a);
	fix_five(stack_a, stack_b);
}
