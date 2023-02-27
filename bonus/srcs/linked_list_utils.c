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
