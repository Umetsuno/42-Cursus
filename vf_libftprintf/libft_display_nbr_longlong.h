/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_nbr_longlong.h                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:18:15 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:18:16 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_NBR_LONGLONG_H
# define LIBFT_DISPLAY_NBR_LONGLONG_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print long long on file descriptor fd.
**	./display/nbr/longlong/ft_putll_fd.c
*/
void	ft_putll_fd(int fd, long long number);

/*
**	Print long long on file descriptor fd followed by a new line.
**	./display/nbr/longlong/ft_putll_fdnl.c
*/
void	ft_putll_fdnl(int fd, long long number);

/*
**	Print long long on standard output.
**	./display/nbr/longlong/ft_putll.c
*/
void	ft_putll(long long number);

/*
**	Print long long on standard output followed by a new line.
**	./display/nbr/longlong/ft_putll_nl.c
*/
void	ft_putll_nl(long long number);

/*
**	Print long long on error output.
**	./display/nbr/longlong/ft_putll_err.c
*/
void	ft_putll_err(long long number);

/*
**	Print long long on error output followed by a new line.
**	./display/nbr/longlong/ft_putll_err.c
*/
void	ft_putll_errnl(long long number);

#endif
