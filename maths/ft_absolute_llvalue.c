/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute_llvalue.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:40:57 by faherrau          #+#    #+#             */
/*   Updated: 2021/01/18 14:03:24 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"

unsigned long long	absolute_llvalue(long long number)
{
	if (number < -18446744073709551615 || number > 18446744073709551615)
	{
		errno = EOVERFLOW;
		return (0);
	}
	else if (number < 0)
		return (-number);
	else
		return (number);
}
