/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:30:32 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 13:25:24 by fnacarel         ###   ########.fr       */
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
				free(tmp->data);
				free(tmp);
				*head = NULL;
			}
			else
			{
				while (tmp->next->next != NULL)
					tmp = tmp->next;
				free(tmp->next->data);
				free(tmp->next);
				tmp->next = NULL;
			}
		}
	}
}

t_node	*new_node(char *data)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = ft_strdup(data);
	new_node->next = NULL;
	return (new_node);
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
