/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:11:35 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/19 22:25:42 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

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
	{
		write(1, "Couldn't swap stack_a, should \
				have at least 2 elements.\n", 56);
		return ;
	}
	swap_first_two_nodes(stack_a);
}
