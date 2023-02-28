/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:56:23 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 17:31:15 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	*atoi_argv(char **argv)
{
	int	i;
	int	*ptr;
	int	spaces_to_alloc;

	i = 1;
	spaces_to_alloc = matrix_len((void **)argv) - 1;
	ptr = malloc(sizeof(int) * spaces_to_alloc);
	while (argv[i])
	{
		ptr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (ptr);
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
		if (ft_has_only_space(argv[i]))
			return (1);
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if ((argv[i][j] == '-' || argv[i][j] == '+') \
			&& !ft_isnumber(argv[i][j + 1]))
			return (1);
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (ft_isnumber(argv[i][j]))
			j++;
		while (argv[i][j] == ' ')
			j++;
		if (argv[i][j] != '\0')
			return (1);
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
	size = matrix_len((void **)argv) - 1;
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
	if (argc < 2)
		exit(1);
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
