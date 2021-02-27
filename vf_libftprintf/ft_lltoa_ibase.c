/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_ibase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:41:47 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:41:51 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa_ibase(long long number, int base, t_bool uppercase)
{
	char	*result;

	if (number > 0)
		return (ft_ulltoa_ibase((unsigned long long)number, base, uppercase));
	result = ft_append_strs("-", ft_ulltoa_ibase((unsigned long long)
				- number, base, uppercase),
			FALSE,
			TRUE);
	return (result);
}
