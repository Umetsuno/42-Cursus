/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 07:47:39 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/04 07:47:50 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"
# include "libft_printf_printable.h"
# include "libft_printf_processor.h"
# include "libft_printf_checker.h"
# include "libft_printf_parser.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print messages like printf function. (contained in libc)
**	./printf/ft_printf.c
*/
int		ft_printf(const char *format, ...);

#endif
