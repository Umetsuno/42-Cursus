/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:16:45 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/03 23:02:16 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, '1'));
	if (!(tab = malloc((len + 1) * sizeof(char))))
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (i < len && s[start + i])
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}
