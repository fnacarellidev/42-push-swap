/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:54:35 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/19 18:17:25 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	list_len(t_node **head)
{
	int	count;

	count = 0;
	if (head)
	{
		while (*head)
		{
			*head = (*head)->next;
			count++;
		}
	}
	return (count);
}

void	node_add_back(t_node **head, t_node *node)
{
	t_node	*tmp;

	tmp = *head;
	if (head && node)
	{
		if (*head == NULL)
			*head = node;
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
		}
	}
}

void	del_first_node(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	if (head)
	{
		if (tmp)
		{
			*head = (*head)->next;
			free(tmp);
		}
	}
}

void	del_last_node(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	if (head)
	{
		if (*head != NULL)
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			free(tmp);
		}
	}
}

void	node_add_front(t_node **head, t_node *node)
{
	if (head)
	{
		node->next = *head;
		*head = node;
	}
}
