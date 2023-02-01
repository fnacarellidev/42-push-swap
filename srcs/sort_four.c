/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:15:56 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/01 19:22:03 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int	min;
	int	last_index;
	int	min_val_index;

	last_index = list_len(stack_a) - 1;
	min_val_index = get_min_val_index(stack_a);
	min = get_min_val(stack_a, min_val_index);
	if (min_val_index == last_index)
		rev_rotate_a(stack_a);
	else
	{
		while ((*stack_a)->data != min)
			rotate_a(stack_a);
	}
	push_b(stack_a, stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
}
