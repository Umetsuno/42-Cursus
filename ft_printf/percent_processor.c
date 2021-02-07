/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_processor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:55:47 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 21:23:26 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	percent_processor(t_formated *formated, va_list args, char **to_print)
{
	int		zeros;

	(void)args;
	*to_print = ft_strmult_front("%", *to_print, 1, TRUE);
	zeros = formated->zero_value - ft_strlen(*to_print);
	if (formated->zero && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
}
