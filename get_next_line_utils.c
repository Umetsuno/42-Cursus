/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 05:18:06 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 17:49:57 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t length;

	if (!s)
		return (0);
	length = 0;
	while (s[length])
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
	char	*append;
	int		append_size;

	if (!s1 && !s2)
		return (0);
	append_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(append = malloc(append_size * sizeof(char))))
	{
		free((void *)s1);
		return (0);
	}
	ft_strcpy(append, s1);
	ft_strcpy(&append[ft_strlen(s1)], s2);
	free((void *)s1);
	return (append);
}

int		contains_nl(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
