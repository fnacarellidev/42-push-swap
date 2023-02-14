/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:58:13 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/14 05:15:16 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	get_closest_superior_idx(t_node *stack_a, t_node *node_b)
{
	int	closest_superior_idx;

	closest_superior_idx = stack_a->idx;
	while (stack_a != NULL)
	{
		if (stack_a->idx < closest_superior_idx && node_b->idx < stack_a->idx)
			closest_superior_idx = stack_a->idx;
		stack_a = stack_a->next;
	}
	return (closest_superior_idx);
}

void	set_target_pos(t_node **stack_a, t_node *stack_b)
{
	t_node	*tmp;
	t_node	*head;
	int		closest_superior_idx;

	tmp = stack_b;
	while (tmp != NULL)
	{
		head = *stack_a;
		closest_superior_idx = get_closest_superior_idx(*stack_a, tmp);
		while (head->idx != closest_superior_idx)
			head = head->next;
		tmp->target_pos = head->curr_pos;
		tmp = tmp->next;
	}
}
