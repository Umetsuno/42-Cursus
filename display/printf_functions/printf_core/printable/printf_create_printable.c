/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_create_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:53:30 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/05 08:39:11 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_formated	create_printable(
	void)
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
