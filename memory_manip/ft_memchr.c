/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:21:09 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 20:38:30 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;

	i = 0;
	c1 = (unsigned char	*)s;
	while (i < n)
	{
		if (c1[i] == (unsigned char)c)
			return ((void *)&c1[i]);
		i++;
	}
	return (0);
}
