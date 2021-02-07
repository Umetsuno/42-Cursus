/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:34:59 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dot_parser(const char *format, int index, va_list args, t_formated *formatd)
{
	formatd->dot = TRUE;
	index++;
	if (is_numeric(format[index]))
	{
		formatd->dot_value = 0;
		while (is_numeric(format[index]))
			formatd->dot_value = formatd->dot_value * 10 + format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		formatd->dot_value = va_arg(args, int);
		index++;
	}
	else
	{
		formatd->dot_value = 0;
	}
	return (index);
}
