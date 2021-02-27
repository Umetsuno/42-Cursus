/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subprocessing_boringtags.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:41:14 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/24 21:50:12 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	completion(t_formated *data, char **print_me, long nb)
{
	int		zero_counter;

	if (nb < 0)
		zero_counter = data->zero_value - ft_strlen(*print_me) - 1;
	else
		zero_counter = data->zero_value - ft_strlen(*print_me);
	if (data->dot == FALSE && data->zero == TRUE && zero_counter > 0)
		*print_me = ft_strmult_front("0", *print_me, zero_counter, TRUE);
	if (data->dot == TRUE && data->zero == TRUE		\
		&& data->dot_value < 0 && zero_counter > 0)
		*print_me = ft_strmult_front("0", *print_me, zero_counter, TRUE);
	zero_counter = data->dot_value - ft_strlen(*print_me);
	if (data->dot == TRUE && zero_counter > 0)
		*print_me = ft_strmult_front("0", *print_me, zero_counter, TRUE);
}

t_bool	zero_and_precision_management(t_formated *data,		\
		char **print_me, long nb)
{
	if (data->zero == TRUE && data->zero_value > 0)
	{
		data->star = TRUE;
		data->star_value = data->zero_value;
	}
	if (data->zero == TRUE && data->zero_value < 0)
	{
		data->minus = TRUE;
		data->minus_value = (-data->zero_value);
	}
	if (data->dot == TRUE && data->dot_value == 0 && nb == 0)
	{
		*print_me = ft_strdup("");
		return (TRUE);
	}
	return (FALSE);
}

void	tag_diuxx(t_formated *data, va_list args, char **print_me)
{
	long	value;

	if (data->type == 'd' || data->type == 'i')
		value = va_arg(args, int);
	else
		value = va_arg(args, unsigned int);
	if (zero_and_precision_management(data, print_me, value))
		return ;
	if (data->type == 'd' || data->type == 'i')
		*print_me = ft_ulltoa_ibase(ft_iabsui(value), 10, FALSE);
	if (data->type == 'u')
		*print_me = ft_ulltoa_ibase(value, 10, FALSE);
	if (data->type == 'x')
		*print_me = ft_ulltoa_ibase(value, 16, FALSE);
	if (data->type == 'X')
		*print_me = ft_ulltoa_ibase(value, 16, TRUE);
	completion(data, print_me, value);
	if (value < 0)
		*print_me = ft_strmult_front("-", *print_me, 1, TRUE);
}

