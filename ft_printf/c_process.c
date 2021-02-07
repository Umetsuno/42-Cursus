/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_process.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:32:52 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 21:34:40 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	c_processor(t_formated *formated, va_list args, char **to_print)
{
	size_t	char_count;
	int		spaces;

	(void)to_print;
	char_count = 0;
	spaces = formated->star_value - 1;
	if (formated->star && spaces > 0)
		char_count += ft_putnchar(' ', spaces);
	char_count += ft_putchar((char)va_arg(args, int));
	spaces = formated->minus_value - 1;
	if (formated->minus && spaces > 0)
		char_count += ft_putnchar(' ', spaces);
	return (char_count);
}
