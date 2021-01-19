/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 05:18:06 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/18 16:40:41 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t length;

	if (!str)
		return (0);
	length = 0;
	while (str[length])
		length++;
	return (length);
}

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	src_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		concat_size;

	if (!s1 && !s2)
		return (0);
	concat_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(concat = malloc(concat_size * sizeof(char))))
	{
		free((void *)s1);
		return (0);
	}
	ft_strcpy(concat, s1);
	ft_strcpy(&concat[ft_strlen(s1)], s2);
	free((void *)s1);
	return (concat);
}

int		contains(char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
