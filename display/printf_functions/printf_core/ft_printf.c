/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 07:42:24 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/04 07:50:06 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_printf(char *format, ...)
{
	va_list		args;
	size_t		char_count;

	va_start(args, format);
	char_count = preprocess(format, args);
	va_end(args);
	return (char_count);
}
