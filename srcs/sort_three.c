/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:40:27 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/27 18:23:03 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	which_move_to_do(t_node **stack, int data1, int data2, int data3)
{
	if (data1 > data2 && data2 < data3 && data1 < data3)
		swap_a(stack);
	else if (data1 > data2 && data2 > data3)
	{
		swap_a(stack);
		rev_rotate_a(stack);
	}
	else if (data1 > data2 && data2 < data3)
		rotate_a(stack);
	else if (data1 < data2 && data2 > data3 && data1 < data3)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else
		rev_rotate_a(stack);
}
