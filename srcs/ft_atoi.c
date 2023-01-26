/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:21:29 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/26 15:38:45 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(*(nptr + i)))
		i++;
	if (!ft_isnumber(*(nptr + i)) && !ft_issign(*(nptr + i)))
		return (res);
	if (ft_issign(*(nptr + i)))
	{
		if (*(nptr + i) == '-')
			sign *= -1;
		i++;
	}
	while (ft_isnumber(*(nptr + i)))
	{
		res = ((res * 10) + (*(nptr + i) - '0') * sign);
		i++;
	}
	return (res);
}
