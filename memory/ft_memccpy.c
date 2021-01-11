/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:21:03 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:23:05 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)src;
	c2 = (unsigned char *)dst;
	if (c1 == 0 && c2 == 0)
		return (0);
	while (i < n)
	{
		c2[i] = c1[i];
		if (c1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
