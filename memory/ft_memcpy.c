/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:21:21 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:24:22 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*clone_1;
	unsigned char	*clone_2;

	i = 0;
	clone_1 = (unsigned char *)src;
	clone_2 = (unsigned char *)dst;
	if (clone_1 == 0 && clone_2 == 0)
		return (0);
	while (i < n)
	{
		clone_2[i] = clone_1[i];
		i++;
	}
	return (dst);
}
