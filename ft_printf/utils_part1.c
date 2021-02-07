/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_part1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:09:34 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 19:55:02 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strcpy(const char *source, char *destination)
{
	size_t	source_length;
	size_t	index;

	if (!destination || !source)
		return (0);
	source_length = ft_strlen(source);
	index = 0;
	while (index < source_length)
	{
		destination[index] = source[index];
		index++;
	}
	destination[index] = 0;
	return (source_length);
}

char	*ft_strndup(const char *str, size_t n)
{
	size_t	index;
	char	*result;

	if (!str)
		return (NULL);
	if (n > ft_strlen(str))
		n = ft_strlen(str);
	if (!(result = ft_calloc(n + 1, sizeof(*str))))
		return (NULL);
	index = 0;
	while (index < n)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = 0;
	return (result);
}

char	*ft_append_strs(char *s1, char *s2, t_bool free_s1, t_bool free_s2)
{
	char	*result;
	size_t	result_size;
	size_t	s1_length;

	result_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(result = ft_calloc(result_size, sizeof(char))))
		return (NULL);
	s1_length = ft_strcpy(s1, result);
	ft_strcpy(s2, &result[s1_length]);
	if (free_s1)
		free((void *)s1);
	if (free_s2)
		free((void *)s2);
	return (result);
}

char	*ft_strmult_front(char *to_mult, char *back, size_t n, t_bool free_back)
{
	char	*result;
	size_t	counter;

	if (n <= 0)
		return (NULL);
	result = ft_append_strs(to_mult, back, FALSE, free_back);
	counter = 1;
	while (counter < n)
	{
		result = ft_append_strs(to_mult, result, FALSE, TRUE);
		counter++;
	}
	return (result);
}
