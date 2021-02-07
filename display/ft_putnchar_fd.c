/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 21:28:22 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 21:28:24 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnchar_fd(int fd, char c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd(fd, c);
		i++;
	}
	return (n);
}
