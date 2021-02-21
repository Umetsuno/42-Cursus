/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_process_function.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:50:19 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/21 14:38:47 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	main_process_function(t_formated *data, va_list args)
{
	size_t		char_count;
	char		*print_me;

	char_count = 0;
	print_me = NULL;
	if (data->type == 'c')
		char_count += tag_c(data, args);
	else if (data->type == 's')
		tag_s(data, args, &print_me);
	else if (data->type == 'p')
		tag_p(data, args, &print_me);
	else if (data->type == '%')
		tag_percent(data, &print_me);
	else if (data->type == 'd' || data->type == 'i')
		tag_di(data, args, &print_me);
	else if (data->type == 'i' || data->type == 'u' ||
		data->type == 'x' || data->type == 'X')
		tag_uxx(data, args, &print_me);
	if (print_me == NULL)
		return (char_count);
	char_count += ft_printf_display(data, &print_me);
	free(print_me);
	return (char_count);
}
