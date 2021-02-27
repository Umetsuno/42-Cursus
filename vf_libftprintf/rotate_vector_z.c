/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vector_z.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:20:49 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:20:50 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	rotate_vector_z(t_vector3 vector, double angle)
{
	float	vx;
	float	vy;

	vx = cos(angle) * vector.vx - sin(angle) * vector.vy;
	vy = sin(angle) * vector.vx + cos(angle) * vector.vy;
	return (create_vector(vx, vy, vector.vz));
}
