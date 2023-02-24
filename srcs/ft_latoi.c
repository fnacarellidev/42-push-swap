/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_latoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:14:24 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 11:11:48 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_issign(char c);
int	ft_isnumber(char c);
int	ft_isspace(char c);

long int	ft_latoi(const char *nptr)
{
	int			i;
	long int	res;
	int			sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(*(nptr + i)))
		i++;
	if (!ft_isnumber(*(nptr + i)) && !ft_issign(*(nptr + i)))
		return (res);
	if (ft_issign(*(nptr + i)))
	{
		if (*(nptr + i) == '-')
			sign *= -1;
		i++;
	}
	while (ft_isnumber(*(nptr + i)))
	{
		res = ((res * 10) + (*(nptr + i) - '0') * sign);
		i++;
	}
	return (res);
}
