/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:52:08 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 18:23:17 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/checker_bonus.h"

void	ft_free_matrix(void **matrix)
{
	int	i;
	int	matrix_size;

	i = 0;
	matrix_size = matrix_len(matrix);
	while (i < matrix_size)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
