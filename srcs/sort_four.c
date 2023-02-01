/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:15:56 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/01 19:03:19 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	get_min_val(t_node **stack, int idx)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->data);
}

static int	get_min_val_index(t_node **stack)
{
	int		i;
	int		j;
	int		min;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	min = tmp->data;
	while (tmp != NULL)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			j = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (j);
}

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
