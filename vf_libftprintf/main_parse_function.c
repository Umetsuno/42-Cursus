/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parse_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:40:06 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/24 22:02:12 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	validator(char c, t_bool to_check_type, t_bool tc_flag, t_bool tc_num)
{
	if (to_check_type == TRUE && check_type(c))
		return (TRUE);
	else if (tc_flag == TRUE && check_flag(c))
		return (TRUE);
	else if (tc_num == TRUE && is_numeric(c))
		return (TRUE);
	return (FALSE);
}

size_t	main_parse_function(const char *format, va_list args,		\
		t_formated *data, size_t index)
{
	while (format[index])
	{
		if (!validator(format[index], TRUE, TRUE, TRUE))
			break ;
		else if (format[index] == '-')
			index = parse_minus(format, args, data, index);
		else if (format[index] == '.')
			index = parse_dot(format, args, data, index);
		else if (format[index] == '0')
			index = parse_zero(format, args, data, index);
		else if (format[index] == '*' || is_numeric(format[index]))
			index = parse_star(format, args, data, index);
		else if (validator(format[index], TRUE, FALSE, FALSE))
		{
			data->type = format[index];
			break ;
		}
		else
			index++;
	}
	return (index);
}
