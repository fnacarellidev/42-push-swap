/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:35:48 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 17:14:13 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/checker_bonus.h"
#include <stdio.h>

int		is_valid_operation(char *instruction, char **valid_operations)
{
	int		i;
	char	*curr_operation;
	int		curr_operation_len;

	i = 0;
	while (i < 11)
	{
		curr_operation = valid_operations[i];
		curr_operation_len = ft_strlen(curr_operation);
		if (ft_strncmp(instruction, curr_operation, curr_operation_len) == 0)
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("Hello World\n");
	return (0);
}
