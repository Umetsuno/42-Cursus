/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_preprocess.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:45:28 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/04 07:50:06 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
