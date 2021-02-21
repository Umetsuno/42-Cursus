/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocessing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:27:04 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/21 17:14:21 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		preprocess(const char *format, va_list args)
{
	size_t		char_count;
	size_t		index;
	t_formated	data;

	char_count = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1])
		{
			data = generate_formated_structure();/* ON CREE UNE STRUCT TOUTE BELLE TOUTE PROPRE */
			index = main_parse_function(format, args, &data, index);/* ON PARSE FORMAT POUR DETERMINER LES FLAGS ET ON ASSIGNE INDEX */
			char_count += main_process_function(&data, args);/* SUITE DE PRINTF */
			/* ON INCREMENTE LE COMPTEUR POUR LA F PRINCIPALE */
		}
		else
			char_count += ft_putchar(format[index]);/* ON PRINT LE TRUC + ON INCREMENTE LE COMPTEUR POUR LA F PRINCIPALE */
		index++;
	}
	return (char_count);
}
