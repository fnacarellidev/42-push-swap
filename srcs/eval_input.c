/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:56:23 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/26 16:10:54 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	has_input(int argc)
{
	if (argc < 2)
		return (0);
	return (1);
}

static int	is_in_int_range(char **argv)
{
	int			i;
	int			max_int;
	int			min_int;
	long int	latoi_ret;

	i = 0;
	max_int = ft_power(2, 31) - 1;
	min_int = ft_power(2, 31) * -1;
	while (argv[i])
	{
		latoi_ret = ft_latoi(argv[i]);
		if (latoi_ret > max_int || latoi_ret < min_int)
			return (0);
		i++;
	}
	return (1);
}

static int	has_non_integer(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		if (ft_has_only_sign(argv[i]))
				return (1);
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < 48 || argv[i][j] > 57) && !ft_issign(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	has_duplicate(char **argv)
{
	int	i;
	int	j;
	int	*ptr;
	int	size;

	i = 1;
	ptr = atoi_argv(argv);
	size = matr_len((void **)argv) - 1;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			if (ptr[i] == ptr[j])
			{
				free(ptr);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(ptr);
	return (0);
}

void	eval_input(int argc, char **argv)
{
	if (!has_input(argc))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (has_non_integer(argv))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (has_duplicate(argv))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (!is_in_int_range(argv))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}
