/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:53:51 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/26 15:01:33 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	is_sorted(t_node *stack)
{
	int	nodes;

	nodes = list_len(&stack);
	if (nodes == 1 || nodes == 0)
		return (1);
	if (stack->data > stack->next->data)
		return (0);
	return (is_sorted(stack->next));
}
