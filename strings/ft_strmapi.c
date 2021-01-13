/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:18:37 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:33:33 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tab;

	if (!s || !f)
		return (0);
	i = 0;
	if (!(tab = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
