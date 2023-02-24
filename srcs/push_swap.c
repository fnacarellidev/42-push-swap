/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:09:52 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 20:09:13 by fnacarel         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_node	**stack_a;
	t_node	**stack_b;

	if (argc < 2)
		return (1);
	eval_input(argc, argv);
	set_stacks(&stack_a, &stack_b, argc, argv);
	if (!is_sorted(*stack_a))
		sort(stack_a, stack_b, list_len(stack_a));
	free_list(stack_a);
	free_list(stack_b);
}
