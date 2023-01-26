/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_ptr_from_argv.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:35:55 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/26 02:09:30 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	*atoi_argv(char **argv)
{
	int	i;
	int	*ptr;
	int	spaces_to_alloc;

	i = 1;
	spaces_to_alloc = matr_len((void **)argv) - 1;
	ptr = malloc(sizeof(int) * spaces_to_alloc);
	while (argv[i])
	{
		ptr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (ptr);
}
