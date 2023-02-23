/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_indexes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:56:59 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/23 14:57:56 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int		have_smaller_idx(int idx, t_node *stack)
{
	while (stack != NULL)
	{
		if (stack->idx < idx)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int		have_bigger_idx(int idx, t_node *stack)
{
	while (stack != NULL)
	{
		if (stack->idx > idx)
			return (1);
		stack = stack->next;
	}
	return (0);
}
