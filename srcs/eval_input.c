/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:56:23 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/25 22:14:56 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	has_input(int argc)
{
	if (argc < 2)
		return (0);
	return (1);
}

static int	power(int base, int exponent)
{
	if (exponent == 1)
		return (base);
	return (base * power(base, exponent - 1));
}
