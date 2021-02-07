/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_preprocess.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:33:47 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	preprocess(
	const char *format,
	va_list args)
{
	t_printable	formated;
	size_t		char_count;
	size_t		index;

	char_count = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1])
		{
			formated = create_printable();
			index = parse_printable(format, index + 1, &formated, args);
			char_count += process(&formated, args);
		}
		else
			char_count += ft_putchar(format[index]);
		index++;
	}
	return (char_count);
}
