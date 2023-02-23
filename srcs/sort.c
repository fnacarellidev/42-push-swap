/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:19:59 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/23 20:16:24 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	which_move_to_do(t_node **stack, int idx1, int idx2, int idx3)
{
	if ((idx1 < idx2) && (idx1 < idx3))
	{
		rev_rotate_a(stack, 0);
		swap_a(stack);
	}
	else if ((idx2 < idx1) && (idx2 < idx3) && (idx1 < idx3))
		swap_a(stack);
	else if ((idx3 < idx1) && (idx3 < idx2) && (idx1 < idx2))
		rev_rotate_a(stack, 0);
	else if ((idx3 < idx2) && (idx3 < idx1))
	{
		rotate_a(stack, 0);
		swap_a(stack);
	}
	else
		rotate_a(stack, 0);
}

void	sort_three(t_node **stack)
{
	int	first_idx;
	int	second_idx;
	int	third_idx;

	first_idx = (*stack)->idx;
	second_idx = (*stack)->next->idx;
	third_idx = (*stack)->next->next->idx;
	which_move_to_do(stack, first_idx, second_idx, third_idx);
}

void	sort(t_node **stack_a, t_node **stack_b, int size_a)
{
	if (size_a < 3)
		swap_a(stack_a);
	else if (size_a == 3)
		sort_three(stack_a);
	else
		sort_big(stack_a, stack_b);
}
