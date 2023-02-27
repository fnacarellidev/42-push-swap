/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:52:08 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 16:52:23 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

static int	ft_count_matrix(void **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}

void	ft_free_matrix(void **matrix)
{
	int	i;
	int	matrix_len;

	i = 0;
	matrix_len = ft_count_matrix(matrix);
	while (i < matrix_len)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
