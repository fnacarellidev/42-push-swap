/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_val.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:15:45 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/01 19:27:50 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	get_max_val_index(t_node **stack)
{
	int		i;
	int		j;
	int		max;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	max = tmp->data;
	while (tmp != NULL)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			j = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (j);
}

int	get_min_val_index(t_node **stack)
{
	int		i;
	int		j;
	int		min;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	min = tmp->data;
	while (tmp != NULL)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			j = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (j);
}

int	get_max_val(t_node **stack, int idx)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->data);
}

int	get_min_val(t_node **stack, int idx)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->data);
}
