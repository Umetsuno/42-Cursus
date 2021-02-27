/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_point3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:20:10 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:20:11 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	distance_point3(t_point3 point_a, t_point3 point_b)
{
	return (sqrt(distance_square_point3(point_a, point_b)));
}
