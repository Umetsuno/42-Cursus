/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:19:49 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:20:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t nbr;
	size_t len;

	len = 0;
	nbr = (size_t)n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	size_t	nbr;

	len = intlen(n);
	if (!(result = malloc(sizeof(char) * (len + 1))))
		return (0);
	nbr = (size_t)n;
	result[len--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		nbr *= -1;
		result[0] = '-';
	}
	while (nbr > 0)
	{
		result[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}
