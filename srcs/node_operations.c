/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:54:35 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/19 17:49:49 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

t_node	*new_node(int data)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
	{
		write(1, "Allocation failed at new_node function\n", 39);
		return (NULL);
	}
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
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
	t_node	*prev_node;
	t_node	*tmp;

	tmp = *head;
	if (head)
	{
		if (*head != NULL)
		{
			while (tmp->next != NULL)
			{
				prev_node = tmp;
				tmp = tmp->next;
			}
			free(tmp);
			prev_node->next = NULL;
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
