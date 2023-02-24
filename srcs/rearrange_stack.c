/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:22:07 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:34 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	smallest_idx_current_position(t_node *stack)
{
	while (stack->idx != 1)
		stack = stack->next;
	return (stack->curr_pos);
}

void	rearrange_stack(t_node **stack)
{
	int	i;
	int	list_size;
	int	smallest_idx_pos;

	i = 0;
	set_positions(*stack, NULL);
	smallest_idx_pos = smallest_idx_current_position(*stack);
	list_size = list_len(stack);
	if (smallest_idx_pos <= list_size / 2)
	{
		while (i < smallest_idx_pos)
		{
			rotate_a(stack, 0);
			i++;
		}
	}
	else
		while (i < list_size - smallest_idx_pos)
		{
			rev_rotate_a(stack, 0);
			i++;
		}
}
