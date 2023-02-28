/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:10:08 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 17:10:32 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/checker_bonus.h"

static void	exec(char *oper, t_node **stack_a, t_node **stack_b)
{
	int	oper_len;

	oper_len = ft_strlen(oper);
	if (ft_strncmp("sa\n", oper, oper_len) == 0)
		swap_a(stack_a);
	else if (ft_strncmp("sb\n", oper, oper_len) == 0)
		swap_b(stack_b);
	else if (ft_strncmp("ss\n", oper, oper_len) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp("pa\n", oper, oper_len) == 0)
		push_a(stack_a, stack_b);
	else if (ft_strncmp("pb\n", oper, oper_len) == 0)
		push_b(stack_a, stack_b);
	else if (ft_strncmp("ra\n", oper, oper_len) == 0)
		rotate_a(stack_a);
	else if (ft_strncmp("rb\n", oper, oper_len) == 0)
		rotate_b(stack_b);
	else if (ft_strncmp("rr\n", oper, oper_len) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp("rra\n", oper, oper_len) == 0)
		rev_rotate_a(stack_a);
	else if (ft_strncmp("rrb\n", oper, oper_len) == 0)
		rev_rotate_b(stack_b);
	else if (ft_strncmp("rrr\n", oper, oper_len) == 0)
		rrr(stack_a, stack_b);
}

void	run_opers(t_node **stack_a, t_node **stack_b, t_opers *operations)
{
	while (operations != NULL)
	{
		exec(operations->data, stack_a, stack_b);
		operations = operations->next;
	}
}
