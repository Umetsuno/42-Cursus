/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:33:41 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	display(t_formated *formated, char **to_print)
{
	int		blank;

	if (formated->type == 'c')
		return (0);
	blank = formated->star_value - ft_strlen(*to_print);
	if (formated->star && blank > 0)
		*to_print = ft_strmult_front(" ", *to_print, blank, TRUE);
	blank = formated->minus_value - ft_strlen(*to_print);
	if (formated->minus && blank > 0)
		*to_print = ft_strmult_back(" ", *to_print, blank, TRUE);
	return (ft_putstr(*to_print));
}
