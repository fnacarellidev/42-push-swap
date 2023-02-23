/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:11:58 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/23 19:34:36 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	matr_len(void **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}

t_node	*new_node(int data)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
	{
		write(1, "Allocation failed at new_node function\n", 39);
		return (NULL);
	}
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

int	ft_power(int base, int exponent)
{
	if (exponent == 1)
		return (base);
	return (base * ft_power(base, exponent - 1));
}

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
