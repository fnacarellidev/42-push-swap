/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:30:32 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 14:36:11 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/checker_bonus.h"

int	list_len(t_node **head)
{
	t_node	*tmp;
	int		count;

	count = 0;
	if (head)
	{
		tmp = *head;
		while (tmp)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}

static void	del_last_node(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	if (head)
	{
		if (*head != NULL)
		{
			if (tmp->next == NULL)
			{
				free(tmp);
				*head = NULL;
			}
			else
			{
				while (tmp->next->next != NULL)
					tmp = tmp->next;
				free(tmp->next);
				tmp->next = NULL;
			}
		}
	}
}

void	free_list(t_node **head)
{
	int	i;
	int	elements;

	i = 0;
	elements = list_len(head);
	while (i < elements)
	{
		del_last_node(head);
		i++;
	}
	free(head);
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
