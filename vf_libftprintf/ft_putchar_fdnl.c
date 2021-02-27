/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fdnl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:43:34 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:43:35 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar_fdnl(int fd, char c)
{
	ft_putchar_fd(fd, c);
	ft_putchar_fd(fd, '\n');
	return (2);
}
