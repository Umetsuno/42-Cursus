/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_part2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:52:03 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 19:55:03 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *target, int char_to_set, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = target;
	while (i < n)
	{
		str[i] = (unsigned char)char_to_set;
		i++;
	}
	return (target);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

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

void	*ft_calloc(size_t quantity, size_t type_size)
{
	void	*result;

	if (!(result = malloc(quantity * type_size)))
		return (NULL);
	ft_bzero(result, quantity * type_size);
	return (result);
}
