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

void	init_valid_operations(char ***valid_operations)
{
	*valid_operations = malloc(sizeof(char *) * 12);
	(*valid_operations)[0] = ft_strdup("sa\n");
	(*valid_operations)[1] = ft_strdup("sb\n");
	(*valid_operations)[2] = ft_strdup("ss\n");
	(*valid_operations)[3] = ft_strdup("pa\n");
	(*valid_operations)[4] = ft_strdup("pb\n");
	(*valid_operations)[5] = ft_strdup("ra\n");
	(*valid_operations)[6] = ft_strdup("rb\n");
	(*valid_operations)[7] = ft_strdup("rr\n");
	(*valid_operations)[8] = ft_strdup("rra\n");
	(*valid_operations)[9] = ft_strdup("rrb\n");
	(*valid_operations)[10] = ft_strdup("rrr\n");
	(*valid_operations)[11] = NULL;
}

int main(void)
{
	printf("Hello World\n");
	return (0);
}
