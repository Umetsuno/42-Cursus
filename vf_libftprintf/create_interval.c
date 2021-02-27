/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_interval.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:19:52 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:19:54 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_interval	create_interval(float istart, float istop)
{
	t_interval	interval;

	interval.istart = istart;
	interval.istop = istop;
	return (interval);
}
