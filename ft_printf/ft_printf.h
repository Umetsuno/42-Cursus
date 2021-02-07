/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:39:45 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/07 16:52:00 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <stdarg.h>

/*
**		MAIN FILE
*/

int		ft_printf(const char *format, ...);

/*
**		MY TYPES
*/

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0,
}			t_bool;

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

/*
**		PROCESSING FUNCTIONS
*/

void	s_processor(t_formated *formated, va_list args, char **to_display);

void	p_processor(t_formated *formated, va_list args, char **to_display);

void	diuxx_processor(t_formated *formated, va_list args, char **to_display);

void	fill_zeros(t_formated *formated, char **to_display, long value);

void	pcrt_processor(t_formated *formated, va_list args, char **to_display);

size_t	preprocess(const char *format, va_list args);

size_t	process(t_formated *formated, va_list args);

size_t	c_processor(t_formated *formated, va_list args, char **to_display);

size_t	display(t_formated *formated, char **to_display);

t_bool	convert_zeros_and_check_precision(t_formated *formated,
	char **to_display, long value);

/*
**		PARSING FUNCTIONS
*/

int	dot_parser(const char *format, int index, va_list args,
	t_formated *formated);

int	star_parser(const char *format, int index, va_list args,
	t_formated *formated);

int	minus_parser(const char *format, size_t index, va_list args,
	t_formated *formated);

int	zero_parser(const char *format, size_t index, va_list args,
	t_formated *formated);


/*
**		FORMAT FUNCTIONS
*/

t_formated		create_formated_str(void);

size_t	parse_formated(const char *format, size_t i,
		t_formated *formated, va_list args);


/*
**		CHECK FUNCTIONS
*/

t_bool	is_valid_type(char c);

t_bool	is_valid_flag(char c);

#endif
