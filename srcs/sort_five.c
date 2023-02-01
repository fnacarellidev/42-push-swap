/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:10:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/01 19:27:05 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	fix_five(t_node **stack_a, t_node **stack_b, int max)
{
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if ((*stack_a)->data == max)
		rotate_a(stack_a);
	else
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	min;
	int	max;
	int	stack_b_size;
	int	min_val_index;
	int	max_val_index;

	stack_b_size = 0;
	min_val_index = get_min_val_index(stack_a);
	max_val_index = get_max_val_index(stack_a);
	min = get_min_val(stack_a, min_val_index);
	max = get_max_val(stack_a, max_val_index);
	while (stack_b_size < 2)
	{
		if ((*stack_a)->data == min || (*stack_a)->data == max)
		{
			push_b(stack_a, stack_b);
			stack_b_size++;
		}
		else
			rotate_a(stack_a);
	}
	sort_three(stack_a);
	fix_five(stack_a, stack_b, max);
}
