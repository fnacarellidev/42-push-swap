/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:10:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/27 20:00:26 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	fix_four(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	tmp = *stack_a;
	if (tmp->data > tmp->next->next->next->data)
		rotate_a(stack_a);
	else if (tmp->data > tmp->next->next->data)
	{
		swap_a(stack_a);
		push_b(stack_a, stack_b);
		swap_a(stack_a);
		push_a(stack_a, stack_b);
	}
	else if (tmp->data > tmp->next->data)
		swap_a(stack_a);
}
