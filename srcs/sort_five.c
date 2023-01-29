/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:10:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/28 21:23:27 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	get_max_val(t_node **stack)
{
	int		max;
	t_node	*tmp;

	tmp = *stack;
	max = tmp->data;
	while (tmp != NULL)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}

static int	get_min_val(t_node **stack)
{
	int		min;
	t_node	*tmp;

	tmp = *stack;
	min = tmp->data;
	while (tmp != NULL)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}
		rotate_a(stack_a);
	else if (tmp->data > tmp->next->next->data)
	{
		swap_a(stack_a);
		push_b(stack_a, stack_b);
		swap_a(stack_a);
		push_a(stack_a, stack_b);
	}
	else if (tmp->data > tmp->next->data)
		swap_a(stack_a);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	min;
	int	stack_b_size;

	stack_b_size = 0;
	max = get_max_val(stack_a);
	min = get_min_val(stack_a);
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
