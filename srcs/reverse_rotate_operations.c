/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:28:28 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/20 10:41:11 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	rev_rotate_a(t_node **stack_a)
{
	t_node	*tmp;
	int		elements;
	t_node	*last_node;

	elements = list_len(stack_a);
	if (elements < 2)
	{
		write(1, "Can't revese rotate stack_a, it has less than two elements.\n", 60);
		return ;
	}
	tmp = *stack_a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	last_node = tmp->next;
	tmp->next = NULL;
	node_add_front(stack_a, last_node);
}

void	rev_rotate_b(t_node **stack_b)
{
	t_node	*tmp;
	int		elements;
	t_node	*last_node;

	elements = list_len(stack_b);
	if (elements < 2)
	{
		write(1, "Can't revese rotate stack_b, it has less than two elements.\n", 60);
		return ;
	}
	tmp = *stack_b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	last_node = tmp->next;
	tmp->next = NULL;
	node_add_front(stack_b, last_node);
}
