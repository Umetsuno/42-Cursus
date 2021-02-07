/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s_processor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:55:27 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	s_processor(t_formated *formated, va_list args, char **to_print)
{
	char	*value;
	int		to_dup;

	value = va_arg(args, char*);
	if (value == NULL)
		*to_print = ft_strdup("(null)");
	else
		*to_print = ft_strdup(value);
	if (formated->dot)
	{
		to_dup = ft_min(formated->dot_value, ft_strlen(*to_print));
		*to_print = ft_strndup(*to_print, to_dup);
	}
}
