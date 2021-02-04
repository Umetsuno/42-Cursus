/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_printable.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 07:47:56 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/04 07:47:58 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_PRINTABLE_H
# define LIBFT_PRINTF_PRINTABLE_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
typedef struct	s_printable
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
}				t_printable;
/*
**	END DEFINES
*/

/*
**	Create new printable structure filled with zeros and false booleans.
**	./printf/printable/printf_create_printable.c
*/
t_printable		create_printable(
	void);

/*
**	Fill printable structure prtbl with valid params contained in string format.
**	./printf/printable/printf_parse_printable.c
*/
size_t			parse_printable(
	const char *format,
	size_t i,
	t_printable *prtbl,
	va_list args);

#endif
