/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:42:02 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:42:03 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_map(float value, t_interval iinput, t_interval ioutput)
{
	return (ioutput.istart + (ioutput.istop - ioutput.istart)
		* ((value - iinput.istart) / (iinput.istop - iinput.istart)));
}
