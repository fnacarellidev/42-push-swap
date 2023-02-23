/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:36:18 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/10 19:28:02 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	ft_issign(char c)
{
	if (c == 43 || c == 45)
		return (1);
	return (0);
}

int	ft_isnumber(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if (c == 32)
		return (1);
	return (0);
}

int	ft_has_only_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_issign(str[i]))
			return (0);
		i++;
	}
	return (1);
}
