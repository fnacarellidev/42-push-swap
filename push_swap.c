/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:09:52 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 17:45:30 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

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
