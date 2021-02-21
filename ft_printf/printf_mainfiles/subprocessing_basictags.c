/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subprocessing_basictags.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:20:55 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/21 17:19:30 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		tag_c(t_formated *data, va_list args)
{
	size_t	char_count;
	int		blank_counter;

	char_count = 0;
	blank_counter = data->star_value - 1;
	if (data->star == TRUE && blank_counter > 0)
		char_count += ft_putnchar(' ', blank_counter);
	char_count += ft_putchar((char)va_arg(args, int));
	blank_counter = data->minus_value - 1;
	if (data->minus == TRUE && blank_counter > 0)
		char_count += ft_putnchar(' ', blank_counter);
	return (char_count);
}

void		tag_s(t_formated *data, va_list args, char **print_me)
{
	char	*param;
	int		clone;

	param = va_arg(args, char*);
	if (param == NULL)
		*print_me = ft_strdup("(null)");
	else
		*print_me = ft_strdup(param);
	if (data->dot == TRUE)
	{
		clone = ft_min(data->dot_value, ft_strlen(*print_me));
		*print_me = ft_strndup(*print_me, clone);
	}
}

void		tag_p(t_formated data, va_list args, char **print_me)
{
	*print_me = ft_ulltoa_ibase(va_arg(args, unsigned long long), 16, FALSE);
	*print_me = ft_append_strs("0x", *print_me, FALSE, TRUE);
}

void		tag_percent(t_formated *data, char **print_me)
{
	int		zero;

	*print_me = ft_strmult_front("%", *print_me, 1, TRUE);
	zero = data->zero_value - ft_strlen(*print_me);
	if (data->zero == TRUE && zero > 0)
		*print_me = ft_strmult_front("0", *print_me, zero, TRUE);
}
