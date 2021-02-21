/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:53:52 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/21 17:16:09 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	check_type(char c)
{
	if (c == '%' || c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (TRUE);
	return (FALSE);
}

t_bool	check_flag(char c)
{
	if (c == '-' || c == '*' || c == '.' || c == '0')
		return (TRUE);
	return (FALSE);
}
