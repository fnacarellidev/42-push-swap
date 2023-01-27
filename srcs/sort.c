/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:19:59 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/27 19:25:54 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	sort(t_node **stack_a, t_node **stack_b, int size_a)
{
	if (size_a < 3)
		swap_a(stack_a);
	else if (size_a == 3)
		sort_three(stack_a);
	else if (size_a == 5)
		sort_five(stack_a, stack_b);
}
