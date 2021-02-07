/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_create_formated_str.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:33:24 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:50:52 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_formated	create_formated_str(void)
{
	t_formated	formated;

	formated.type = 0;
	formated.minus = FALSE;
	formated.minus_value = 0;
	formated.star = FALSE;
	formated.star_value = 0;
	formated.dot = FALSE;
	formated.dot_value = 0;
	formated.zero = FALSE;
	formated.zero_value = 0;
	return (formated);
}
