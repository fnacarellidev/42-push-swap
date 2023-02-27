/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:21:45 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 18:21:57 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

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
