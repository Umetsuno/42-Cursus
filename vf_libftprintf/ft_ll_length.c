/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:41:38 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:41:39 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ll_length(long long number)
{
	if (number < 0)
		return (ft_ull_length((unsigned long long) - number) + 1);
	return (ft_ull_length((unsigned long long)number));
}
