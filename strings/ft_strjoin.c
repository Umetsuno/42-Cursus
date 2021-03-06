/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:22:26 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 20:58:18 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
