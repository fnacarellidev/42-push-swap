/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:50:57 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 16:51:08 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

char	*ft_strdup(char *str)
{
	int		i;
	int		str_len;
	char	*dupped_str;

	i = 0;
	str_len = ft_strlen(str);
	dupped_str = malloc(sizeof(char) * str_len + 1);
	while (i < str_len)
	{
		dupped_str[i] = str[i];
		i++;
	}
	dupped_str[i] = '\0';
	return (dupped_str);
}
