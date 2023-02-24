/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   have_smaller_idx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:05:44 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 14:06:00 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

int	have_smaller_idx(int idx, t_node *stack)
{
	while (stack != NULL)
	{
		if (stack->idx < idx)
			return (1);
		stack = stack->next;
	}
	return (0);
}
