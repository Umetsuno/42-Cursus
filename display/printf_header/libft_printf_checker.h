/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_checker.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 07:48:15 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/05 08:44:49 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_CHECKER_H
# define LIBFT_PRINTF_CHECKER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Check if char c is a valid type usable by ft_printf.
**	./printf/checker/printf_is_valid_type.c
*/
t_bool	is_valid_type(char c);

/*
**	Check if char c is a valid flag usable by ft_printf.
**	./printf/checker/printf_is_valid_flag.c
*/
t_bool	is_valid_flag(char c);

#endif
