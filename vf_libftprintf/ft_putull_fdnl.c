/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull_fdnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:49:52 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:49:53 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putull_fdnl(int fd, unsigned long long number)
{
	ft_putull_fd(fd, number);
	ft_putchar_fd(fd, '\n');
}
