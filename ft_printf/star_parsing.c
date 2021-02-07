/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   star_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:16:37 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	star_parser(const char *format, int index, va_list args, t_formated *formtd)
{
	formtd->star = TRUE;
	if (is_numeric(format[index]))
	{
		formtd->star_value = 0;
		while (is_numeric(format[index]))
			formtd->star_value = formtd->star_value * 10 + format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		formtd->star_value = va_arg(args, int);
		index++;
	}
	if (formtd->star_value < 0)
	{
		formtd->minus = TRUE;
		formtd->minus_value = -formtd->star_value;
		formtd->star = FALSE;
		formtd->star_value = 0;
	}
	return (index);
}
