/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_only_sign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:55:20 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 16:55:36 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

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
