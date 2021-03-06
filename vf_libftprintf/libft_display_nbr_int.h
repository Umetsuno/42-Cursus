/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_nbr_int.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:18:05 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:18:06 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_NBR_INT_H
# define LIBFT_DISPLAY_NBR_INT_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print int on file descriptor fd.
**	./display/nbr/int/ft_puti_fd.c
*/
void	ft_puti_fd(int fd, int number);

/*
**	Print int on file descriptor fd followed by a new line.
**	./display/nbr/int/ft_puti_fdnl.c
*/
void	ft_puti_fdnl(int fd, int number);

/*
**	Print int on standard output.
**	./display/nbr/int/ft_puti.c
*/
void	ft_puti(int number);

/*
**	Print int on standard output followed by a new line.
**	./display/nbr/int/ft_puti_nl.c
*/
void	ft_puti_nl(int number);

/*
**	Print int on error output.
**	./display/nbr/int/ft_puti_err.c
*/
void	ft_puti_err(int number);

/*
**	Print int on error output followed by a new line.
**	./display/nbr/int/ft_puti_errnl.c
*/
void	ft_puti_errnl(int number);

#endif
