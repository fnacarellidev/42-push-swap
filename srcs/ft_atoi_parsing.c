/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:36:18 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/26 16:11:58 by fnacarel         ###   ########.fr       */
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
