/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:43:14 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/27 19:49:48 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		return (i);
	}
	return (0);
}

void	ft_strcat(char *dest, const char *src)
{
	int		i;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen_gnl(dest);
	if (src)
	{
		while (*(src + i))
		{
			*(dest + dest_len + i) = *(src + i);
			i++;
		}
	}
}

char	*ft_strjoin(char *str, char *buf)
{
	char	*fstr;

	if (!str)
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	if (!str || !buf)
		return (NULL);
	fstr = ft_calloc(sizeof(char), ft_strlen_gnl(str) + ft_strlen_gnl(buf) + 1);
	if (!fstr)
		return (NULL);
	ft_strcat(fstr, str);
	ft_strcat(fstr, buf);
	*(fstr + ft_strlen_gnl(str) + ft_strlen_gnl(buf)) = '\0';
	free(str);
	return (fstr);
}

char	*ft_strchr_gnl(char *s, int c)
{
	int			i;
	const char	*first_occurence;

	i = 0;
	first_occurence = 0;
	if (s)
	{
		while (*(s + i))
		{
			if (*(s + i) == (unsigned char) c)
			{
				first_occurence = (s + i);
				return ((char *) first_occurence);
			}
			i++;
		}
		if (c == 0)
			first_occurence = (s + ft_strlen_gnl(s));
		return ((char *) first_occurence);
	}
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (!nmemb || !size || (nmemb * size) / size != nmemb)
		return (NULL);
	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < size * nmemb)
	{
		*((char *) ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
