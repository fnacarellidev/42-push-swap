/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:12:28 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 15:13:07 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

void	rev_rotate_a(t_node **stack_a)
{
	t_node	*tmp;
	int		elements;
	t_node	*last_node;

	elements = list_len(stack_a);
	if (elements < 2)
		return ;
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
		return ;
	tmp = *stack_b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	last_node = tmp->next;
	tmp->next = NULL;
	node_add_front(stack_b, last_node);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rev_rotate_a(stack_a);
	rev_rotate_b(stack_b);
}
