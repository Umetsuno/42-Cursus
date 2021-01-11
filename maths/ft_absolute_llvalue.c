/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute_llvalue.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:40:57 by faherrau          #+#    #+#             */
/*   Updated: 2021/01/11 17:09:52 by faherrau         ###   ########lyon.fr   */
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
