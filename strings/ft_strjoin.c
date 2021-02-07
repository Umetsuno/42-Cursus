/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:22:26 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 20:25:19 by faherrau         ###   ########lyon.fr   */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		concat_size;

	if (!s1 && !s2)
		return (NULL);
	concat_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(concat = malloc(concat_size * sizeof(char))))
	{
		free((void *)s1);
		return (NULL);
	}
	ft_strcpy(concat, s1);
	ft_strcpy(&concat[ft_strlen(s1)], s2);
	free((void *)s1);
	return (concat);
}
