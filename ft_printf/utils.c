/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:09:34 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 17:10:13 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strmult_front(char *to_mult, char *back, size_t n, t_bool free_back)
{
	char	*result;
	size_t	counter;

	if (n <= 0)
		return (NULL);
	result = ft_append_strs(to_mult, back, FALSE, free_back);
	counter = 1;
	while (counter < n)
	{
		result = ft_append_strs(to_mult, result, FALSE, TRUE);
		counter++;
	}
	return (result);
}
