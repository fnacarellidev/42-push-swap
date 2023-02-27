/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_setters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:58:13 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 13:33:53 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	get_highest_idx(t_node *stack_a)
{
	int	highest;

	highest = stack_a->idx;
	while (stack_a != NULL)
	{
		if (stack_a->idx > highest)
			highest = stack_a->idx;
		stack_a = stack_a->next;
	}
	return (highest);
}

static int	get_closest_superior_idx(t_node *stack_a, t_node *node_b)
{
	int	closest_superior_idx;

	closest_superior_idx = get_highest_idx(stack_a);
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

void	set_costs(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp;

	tmp = stack_b;
	while (tmp != NULL)
	{
		tmp->cost_a = calc_cost_a(stack_a, tmp);
		tmp->cost_b = calc_cost_b(stack_b, tmp);
		tmp = tmp->next;
	}
}

void	set_positions(t_node *stack_a, t_node *stack_b)
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
