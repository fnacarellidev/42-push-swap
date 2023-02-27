/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:18:45 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 11:04:31 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	index_for_curr_node(t_node *head_a, t_node **node_being_analyzed)
{
	int	idx;

	idx = 1;
	while (head_a != NULL)
	{
		if (head_a->data < (*node_being_analyzed)->data)
			idx++;
		head_a = head_a->next;
	}
	return (idx);
}

static void	set_stack_indexes(t_node **stack_a)
{
	int		i;
	int		list_size;
	t_node	*node_to_assign;

	i = 0;
	node_to_assign = *stack_a;
	list_size = list_len(stack_a);
	while (i < list_size)
	{
		node_to_assign->idx = index_for_curr_node(*stack_a, &node_to_assign);
		i++;
		node_to_assign = node_to_assign->next;
	}
}

void	set_stacks(t_node ***stk_a, t_node ***stk_b, int argc, char **argv)
{
	int		i;
	int		data;
	t_node	*node;

	i = 1;
	*stk_a = malloc(sizeof(t_node *));
	*stk_b = malloc(sizeof(t_node *));
	**stk_a = NULL;
	**stk_b = NULL;
	while (i < argc)
	{
		data = ft_atoi(argv[i]);
		node = new_node(data);
		node_add_back(*stk_a, node);
		i++;
	}
	set_stack_indexes(*stk_a);
}
