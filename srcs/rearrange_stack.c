/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rearrange_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:22:07 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/23 20:16:04 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int		smallest_idx_current_position(t_node *stack)
{
	while (stack->idx != 1)
		stack = stack->next;
	return (stack->curr_pos);
}
