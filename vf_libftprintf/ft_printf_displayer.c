/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_displayer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:10:46 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/24 10:29:53 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_printf_display(t_formated *data, char **print_me)
{
	int		blank;

	if (data->type == 'c')
		return (0);
	blank = data->star_value - ft_strlen(*print_me);
	if (data->star == TRUE && blank > 0)
		*print_me = ft_strmult_front(" ", *print_me, blank, TRUE);
	blank = data->minus_value - ft_strlen(*print_me);
	if (data->minus == TRUE && blank > 0)
		*print_me = ft_strmult_back(" ", *print_me, blank, TRUE);
	return (ft_putstr(*print_me));
}
