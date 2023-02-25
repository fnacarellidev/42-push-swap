/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:22:07 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/25 18:44:40 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	smallest_idx_current_position(t_node *stack)
{
	while (stack->idx != 1)
		stack = stack->next;
	return (stack->curr_pos);
}

static void	fix_rotating_up(t_node **stack, int smallest_idx_pos)
{
	int	i;

	i = 0;
	while (i < smallest_idx_pos)
	{
		rotate_a(stack, 0);
		i++;
	}
}

static void	fix_rotating_down(t_node **stack, int smallest_idx_pos)
{
	int	i;
	int	stack_size;

	i = 0;
	stack_size = list_len(stack);
	while (i < stack_size - smallest_idx_pos)
	{
		rev_rotate_a(stack, 0);
		i++;
	}
}

void	rearrange_stack(t_node **stack)
{
	int	list_size;
	int	smallest_idx_pos;

	set_positions(*stack, NULL);
	smallest_idx_pos = smallest_idx_current_position(*stack);
	list_size = list_len(stack);
	if (smallest_idx_pos <= list_size / 2)
		fix_rotating_up(stack, smallest_idx_pos);
	else
		fix_rotating_down(stack, smallest_idx_pos);
}
