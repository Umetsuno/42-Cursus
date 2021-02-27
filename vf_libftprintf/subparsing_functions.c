/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subparsing_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:01:57 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/24 08:32:00 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		parse_minus(const char *format, va_list args,		\
			t_formated *data, size_t index)
{
	data->minus = TRUE;
	data->minus_value = 0;
	index++;
	while (format[index] == '0')
		index++;
	if (validator(format[index], FALSE, FALSE, TRUE))
	{
		
		while (validator(format[index], FALSE, FALSE, TRUE))
		{
			data->minus_value = data->minus_value * 10 + format[index] - '0';
			index++;
		}
	}
	else if (format[index] == '*')
	{
		data->minus_value = va_arg(args, int);
		index++;
	}
	data->minus_value = ft_abs(data->minus_value);
	return (index);
}

size_t		parse_star(const char *format, va_list args,		\
			t_formated *data, int index)
{
	data->star = TRUE;
	if (validator(format[index], FALSE, FALSE, TRUE))
	{
		data->star_value = 0;
		while (validator(format[index], FALSE, FALSE, TRUE))
		{
			data->star_value = data->star_value * 10 + format[index] - '0';
			index++;
		}
	}
	else if (format[index] == '*')
	{
		data->star_value = va_arg(args, int);
		index++;
	}
	if (data->star_value < 0)
	{
		data->minus = TRUE;
		data->star = FALSE;
		data->minus_value = data->star_value * -1;
		data->star_value = 0;
	}
	return (index);
}

size_t		parse_dot(const char *format, va_list args,		\
			t_formated *data, size_t index)
{
	data->dot = TRUE;
	data->dot_value = 0;
	index++;
	if (validator(format[index], FALSE, FALSE, TRUE))
	{
		while (validator(format[index], FALSE, FALSE, TRUE))
		{
			data->dot_value = data->dot_value * 10 + format[index] - '0';
			index++;
		}
	}
	else if (format[index] == '*')
	{
		data->dot_value = va_arg(args, int);
		index++;
	}
	return (index);
}

size_t		parse_zero(const char *format, va_list args,		\
			t_formated *data, size_t index)
{
	data->zero = TRUE;
	data->zero_value = 0;
	index++;
	if (validator(format[index], FALSE, FALSE, TRUE))
	{
		while (validator(format[index], FALSE, FALSE, TRUE))
		{
			data->zero_value = data->zero_value * 10 + format[index] - '0';
			index++;
		}
	}
	else if (format[index] == '*')
	{
		data->zero_value = va_arg(args, int);
		index++;
	}
	return (index);
}