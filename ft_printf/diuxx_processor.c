/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_diuxx_processor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:55:36 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	diuxx_processor(t_formated *formated, va_list args, char **to_print)
{
	long	value;

	if (formated->type == 'd' || formated->type == 'i')
		value = va_arg(args, int);
	else
		value = va_arg(args, unsigned int);
	if (zeros_and_precision(formated, to_print, value))
		return ;
	if (formated->type == 'd' || formated->type == 'i')
		*to_print = ft_ulltoa_ibase(ft_iabsui(value), 10, FALSE);
	if (formated->type == 'u')
		*to_print = ft_ulltoa_ibase(value, 10, FALSE);
	if (formated->type == 'x')
		*to_print = ft_ulltoa_ibase(value, 16, FALSE);
	if (formated->type == 'X')
		*to_print = ft_ulltoa_ibase(value, 16, TRUE);
	fill_zeros(formated, to_print, value);
	if (value < 0)
		*to_print = ft_strmult_front("-", *to_print, 1, TRUE);
}

t_bool	zeros_and_precision(t_formated *formated, char **to_print,
	long value)
{
	if (formated->zero && formated->zero_value > 0)
	{
		formated->star = TRUE;
		formated->star_value = formated->zero_value;
	}
	if (formated->zero && formated->zero_value < 0)
	{
		formated->minus = TRUE;
		formated->minus_value = -formated->zero_value;
	}
	if (formated->dot && formated->dot_value == 0 && value == 0)
	{
		*to_print = ft_strdup("");
		return (TRUE);
	}
	return (FALSE);
}

void	fill_zeros(t_formated *formated, char **to_print, long value)
{
	int		zeros;

	zeros = formated->zero_value - ft_strlen(*to_print) - ((value < 0) ? 1 : 0);
	if (!formated->dot && formated->zero && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
	if (formated->dot && formated->dot_value < 0 && formated->zero && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
	zeros = formated->dot_value - ft_strlen(*to_print);
	if (formated->dot && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
}
