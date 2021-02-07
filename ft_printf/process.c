/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:33:52 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 21:22:22 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	process(t_formated *formated, va_list args)
{
	char	*to_print;
	size_t	char_count;

	to_print = NULL;
	char_count = 0;
	if (formated->type == 'c')
		char_count += c_processor(formated, args, &to_print);
	else if (formated->type == 's')
		s_processor(formated, args, &to_print);
	else if (formated->type == 'p')
		p_processor(formated, args, &to_print);
	else if (formated->type == 'd' || formated->type == 'i'
	|| formated->type == 'u' || formated->type == 'x' || formated->type == 'X')
		diuxx_processor(formated, args, &to_print);
	else if (formated->type == '%')
		percent_processor(formated, args, &to_print);
	if (to_print != NULL)
		char_count += display(formated, &to_print);
	if (to_print != NULL)
		free(to_print);
	return (char_count);
}
