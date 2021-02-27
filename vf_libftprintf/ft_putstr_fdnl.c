/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:48:26 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:48:27 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fdnl(int fd, char *str)
{
	size_t	len;

	len = ft_putstr_fd(fd, str);
	ft_putchar_fd(fd, '\n');
	return (len + 1);
}
