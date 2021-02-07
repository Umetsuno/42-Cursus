/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:33:59 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:50:00 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *format, ...)
{
	va_list		args;
	size_t		char_count;

	va_start(args, format);
	char_count = preprocess(format, args);
	va_end(args);
	return (char_count);
}
