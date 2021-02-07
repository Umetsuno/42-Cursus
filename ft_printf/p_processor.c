/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p_processor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:55:41 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	p_processor(t_formated *formated, va_list args, char **to_print)
{
	(void)formated;
	*to_print = ft_ulltoa_ibase(va_arg(args, unsigned long long), 16, FALSE);
	*to_print = ft_append_strs("0x", *to_print, FALSE, TRUE);
}
