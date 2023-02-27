/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:19:59 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 11:07:42 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	transfer_to_b(t_node **stack_a, t_node **stack_b)
{
	int		middle_index;

	middle_index = list_len(stack_a) / 2;
	while (have_smaller_idx(middle_index, *stack_a))
	{
		if ((*stack_a)->idx < middle_index)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a, 0);
	}
	while (list_len(stack_a) > 3)
		push_b(stack_a, stack_b);
}

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

static void	sort_big(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	transfer_to_b(stack_a, stack_b);
	if (!is_sorted(*stack_a))
		sort_three(stack_a);
	while (list_len(stack_b) != 0)
	{
		tmp = *stack_b;
		set_positions(*stack_a, *stack_b);
		set_target_pos(stack_a, tmp);
		set_costs(*stack_a, *stack_b);
		perform_cheapest_action(stack_a, stack_b);
	}
	rearrange_stack(stack_a);
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
	else if (size_a == 5)
		sort_five(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}
