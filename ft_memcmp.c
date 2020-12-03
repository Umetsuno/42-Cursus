/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:21:14 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:23:57 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*clone_1;
	unsigned char	*clone_2;

	i = 0;
	clone_1 = (unsigned char *)s1;
	clone_2 = (unsigned char *)s2;
	while (i < n)
	{
		if (clone_1[i] != clone_2[i])
			return (clone_1[i] - clone_2[i]);
		i++;
	}
	return (0);
}
