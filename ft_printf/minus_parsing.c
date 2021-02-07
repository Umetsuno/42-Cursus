/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:36:00 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	minus_parser(const char *format, size_t index, va_list args,
	t_formated *formated)
{
	formated->minus = TRUE;
	index++;
	while (format[index] == '0')
		index++;
	if (is_numeric(format[index]))
	{
		formated->minus_value = 0;
		while (is_numeric(format[index]))
			formated->minus_value = formated->minus_value * 10
			+ format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		formated->minus_value = va_arg(args, int);
		index++;
	}
	else
		formated->minus_value = 0;
	formated->minus_value = ft_abs(formated->minus_value);
	return (index);
}
