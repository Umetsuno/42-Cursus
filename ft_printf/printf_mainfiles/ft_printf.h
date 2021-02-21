/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:51:33 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/21 17:30:52 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>

int		ft_printf(const char *, ...);

/*
**		MY_TYPES
*/

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

typedef	enum e_bool
{
	TRUE = 1,
	FALSE = 0,
}	t_bool;

/*
**		FT_PRINTF.C
*/

int		ft_printf(const char *format, ...);

/*
**		PREPROCESSING.C
*/

size_t	preprocess(const char *format, va_list args);

/*
**		STRUCTURE_INIT
*/

t_formated	generate_formated_structure(void);

/*
**		MAIN PARSING FUNCTIONS
*/

size_t	main_parse_function(const char *format, va_list args,		\
		size_t index, t_formated *data);

t_bool	validator(char c, t_bool to_check_type, t_bool tc_flag, t_bool tc_num);

/*
**		SUB PARSING FUNCTIONS
*/

size_t		parse_minus(const char *format, va_list args,		\
			t_formated *data, size_t index);

size_t		parse_star(const char *format, va_list args,		\
			t_formated *data, int index);

size_t		parse_dot(const char *format, va_list args,		\
			t_formated *data, size_t index);

size_t		parse_zero(const char *format, va_list args,		\
			t_formated *data, size_t index);

/*
**		CHECKERS
*/

t_bool	check_type(char c);

t_bool	check_flag(char c);

/*
**		MAIN PROCESSING FUNCTION
*/

size_t	main_process_function(t_formated *data, va_list args);

/*
**		SUB PROCESSING BASIC TAGS FUNCTIONS
*/

size_t		tag_c(t_formated *data, va_list args);

void		tag_s(t_formated *data, va_list args, char **print_me);

void		tag_p(t_formated data, va_list args, char **print_me);

void		tag_percent(t_formated *data, char **print_me);

/*
**		SUB PROCESSING BORING TAGS FUNCTIONS
*/

void	completion(t_formated *data, char **print_me, long nb);

t_bool	zero_and_precision_management(t_formated *data,		\
		char **print_me, long nb);

void	tag_di(t_formated *data, va_list args, char **print_me);

void	tag_uxx(t_formated *data, va_list args, char **print_me);

/*
**		FT_PRINTF DISPLAYER
*/

size_t		ft_printf_display(t_formated *data, char **print_me);

#endif
