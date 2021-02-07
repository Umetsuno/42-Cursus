/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:16:45 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	zero_parser(const char *format, size_t index, va_list args,
	t_formated *formated)
{
	formated->zero = TRUE;
	index++;
	if (is_numeric(format[index]))
	{
		formated->zero_value = 0;
		while (is_numeric(format[index]))
			formated->zero_value = formated->zero_value * 10 +
			format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		formated->zero_value = va_arg(args, int);
		index++;
	}
	else
	{
		formated->zero_value = 0;
	}
	return (index);
}
