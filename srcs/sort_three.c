/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:40:27 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/13 15:02:01 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	which_move_to_do(t_node **stack, int idx1, int idx2, int idx3)
{
	if ((idx1 < idx2) && (idx1 < idx3))
	{
		rev_rotate_a(stack);
		swap_a(stack);
	}
	else if ((idx2 < idx1) && (idx2 < idx3) && (idx1 < idx3))
		swap_a(stack);
	else if ((idx3 < idx1) && (idx3 < idx2) && (idx1 < idx2))
		rev_rotate_a(stack);
	else if ((idx3 < idx2) && (idx3 < idx1))
	{
		rotate_a(stack);
		swap_a(stack);
	}
	else
		rotate_a(stack);
}

void	sort_three(t_node **stack)
{
	int first_idx;
	int second_idx;
	int third_idx;

	if (is_sorted(*stack))
		return ;
	first_idx = (*stack)->idx;
	second_idx = (*stack)->next->idx;
	third_idx = (*stack)->next->next->idx;
	which_move_to_do(stack, first_idx, second_idx, third_idx);
}
