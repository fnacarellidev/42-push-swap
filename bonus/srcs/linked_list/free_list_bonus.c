/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:01:42 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 16:04:31 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

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

static void	del_last_node_oper(t_opers **head)
{
	t_opers	*tmp;

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

void	free_operation_list(t_opers **head)
{
	int	i;
	int	elements;

	i = 0;
	elements = oper_list_len(head);
	while (i < elements)
	{
		del_last_node_oper(head);
		i++;
	}
	free(head);
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
