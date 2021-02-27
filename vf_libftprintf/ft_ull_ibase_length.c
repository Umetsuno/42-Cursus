/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull_ibase_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:16:19 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:16:20 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ull_ibase_length(unsigned long long number, int ibase)
{
	size_t	result;

	result = 0;
	while (number != 0)
	{
		number /= ibase;
		result++;
	}
	return (result);
}
