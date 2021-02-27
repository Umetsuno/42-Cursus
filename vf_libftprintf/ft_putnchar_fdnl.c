/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fdnl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:46:09 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:46:17 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnchar_fdnl(int fd, char c, size_t n)
{
	ft_putnchar_fd(fd, c, n);
	ft_putchar_fd(fd, '\n');
	return (n + 1);
}
