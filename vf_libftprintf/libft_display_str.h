/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_str.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:18:41 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:18:42 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_STR_H
# define LIBFT_DISPLAY_STR_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print string str on file descriptor fd.
**	./display/str/ft_putstr_fd.c
*/
size_t	ft_putstr_fd(int fd, char *str);

/*
**	Print string str on file descriptor fd followed by a new line.
**	./display/str/ft_putstr_fdnl.c
*/
size_t	ft_putstr_fdnl(int fd, char *str);

/*
**	Print string str on standard output.
**	./display/str/ft_putstr.c
*/
size_t	ft_putstr(char *str);

/*
**	Print string str on standard output followed by a new line.
**	./display/str/ft_putstr_nl.c
*/
size_t	ft_putstr_nl(char *str);

/*
**	Print string str on error output.
**	./display/str/ft_putstr_err.c
*/
size_t	ft_putstr_err(char *str);

/*
**	Print string str on error output followed by a new line.
**	./display/str/ft_putstr_errnl.c
*/
size_t	ft_putstr_errnl(char *str);

#endif
