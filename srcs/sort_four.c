/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:15:56 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/01 18:29:47 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

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
