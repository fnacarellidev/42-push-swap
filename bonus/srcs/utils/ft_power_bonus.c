/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:20:44 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 18:20:51 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_power(int base, int exponent)
{
	if (exponent == 1)
		return (base);
	return (base * ft_power(base, exponent - 1));
}
