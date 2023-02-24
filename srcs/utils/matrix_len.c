/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:59:35 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 12:59:53 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	matrix_len(void **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}
