/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:22:26 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:40:05 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcpy(char *dest, char const *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*clone;
	int		size;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(clone = malloc(size * sizeof(char))))
	{
		errno = ENOMEM;
		return (0);
	}
	ft_strcpy(clone, s1);
	ft_strcpy(&clone[ft_strlen(s1)], s2);
	return (clone);
}
