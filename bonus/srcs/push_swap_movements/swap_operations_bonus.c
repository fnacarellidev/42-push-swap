/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:10:52 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 15:11:56 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

static void	swap_first_two_nodes(t_node **head)
{
	t_node	*tmp;

	tmp = (*head)->next;
	(*head)->next = (*head)->next->next;
	tmp->next = (*head);
	*head = tmp;
}

void	swap_a(t_node **stack_a)
{
	int	elements;

	elements = list_len(stack_a);
	if (elements < 2)
		return ;
	swap_first_two_nodes(stack_a);
}

void	swap_b(t_node **stack_b)
{
	int	elements;

	elements = list_len(stack_b);
	if (elements < 2)
		return ;
	swap_first_two_nodes(stack_b);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}
