/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_parse_formated_str.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:33:31 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	parse_formated_str(const char *format, size_t i, t_formated *formated,
	va_list args)
{
	while (format[i])
	{
		if (!is_valid_flag(format[i]) && !is_valid_type(format[i])
			&& !is_numeric(format[i]))
			break ;
		else if (format[i] == '.')
			i = dot_parser(format, i, args, formated);
		else if (format[i] == '-')
			i = minus_parser(format, i, args, formated);
		else if (format[i] == '0')
			i = zero_parser(format, i, args, formated);
		else if (format[i] == '*' || is_numeric(format[i]))
			i = star_parser(format, i, args, formated);
		else if (is_valid_type(format[i]))
		{
			formated->type = format[i];
			break ;
		}
		else
			i++;
	}
	return (i);
}
