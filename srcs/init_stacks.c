/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:18:45 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/19 19:55:00 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	init_stacks(t_node ***stack_a, t_node ***stack_b, int argc, char **argv)
{
	int		i;
	int		data;
	t_node	*node;

	i = 1;
	*stack_b = malloc(sizeof(t_node *));
	*stack_a = malloc(sizeof(t_node *));
	**stack_a = NULL;
	**stack_b = NULL;
	while (i < argc)
	{
		data = ft_atoi(argv[i]);
		node = new_node(data);
		node_add_back(*stack_a, node);
		i++;
	}
}
