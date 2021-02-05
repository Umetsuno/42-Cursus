/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_printable.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 07:47:56 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/05 09:14:29 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_formated_H
# define LIBFT_PRINTF_formated_H

# include "libft.h"

typedef struct	s_formated
{
	char	type;
	t_bool	minus;
	int		minus_value;
	t_bool	star;
	int		star_value;
	t_bool	dot;
	int		dot_value;
	t_bool	zero;
	int		zero_value;
}				t_formated;

t_formated		create_formated(
	void);

size_t			parse_formated(
	const char *format,
	size_t i,
	t_formated *formated,
	va_list args);

#endif
