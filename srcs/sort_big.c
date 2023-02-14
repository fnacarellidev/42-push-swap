/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:30:36 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/13 23:04:09 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	get_middle_idx(t_node *stack_a)
{
	int	i;
	int	list_size;

	i = 0;
	list_size = list_len(&stack_a);
	while (i < list_size / 2)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (stack_a->idx);
}

static void	set_positions(t_node *stack_a, t_node *stack_b)
{
	int	i;

	i = 0;
	while (stack_a != NULL)
	{
		stack_a->curr_pos = i;
		i++;
		stack_a = stack_a->next;
	}
	i = 0;
	while (stack_b != NULL)
	{
		stack_b->curr_pos = i;
		i++;
		stack_b = stack_b->next;
	}
}
