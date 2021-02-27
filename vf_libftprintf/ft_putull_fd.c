/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:49:48 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:49:48 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putull_fd(int fd, unsigned long long number)
{
	if (number / 10 > 0)
		ft_putull_fd(fd, number / 10);
	ft_putchar_fd(fd, number % 10 + 48);
}
