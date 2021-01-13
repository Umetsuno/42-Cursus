/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:18:12 by faherrau          #+#    #+#             */
/*   Updated: 2020/11/30 19:18:13 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (!(result = malloc(count * size)))
	{
		errno = ENOMEM;
		return (0);
	}
	ft_bzero(result, count * size);
	return (result);
}
