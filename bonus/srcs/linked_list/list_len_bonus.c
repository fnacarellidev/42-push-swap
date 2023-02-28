/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:03:09 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 15:03:31 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

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
