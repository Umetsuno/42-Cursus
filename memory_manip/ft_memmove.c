/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:21:28 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:24:47 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*clone_1;
	const unsigned char *clone_2;

	i = 0;
	clone_1 = dst;
	clone_2 = src;
	if (clone_1 < clone_2)
	{
		while (i < len)
		{
			clone_1[i] = clone_2[i];
			i++;
		}
	}
	else if (clone_1 > clone_2)
	{
		while (len > 0)
		{
			clone_1[len - 1] = clone_2[len - 1];
			len--;
		}
	}
	return (dst);
}
