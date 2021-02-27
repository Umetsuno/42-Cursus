/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vector_y.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:20:31 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:20:32 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	rotate_vector_y(t_vector3 vector, double angle)
{
	float	vx;
	float	vz;

	vx = cos(angle) * vector.vx - sin(angle) * vector.vz;
	vz = -sin(angle) * vector.vx - cos(angle) * vector.vz;
	return (create_vector(vx, vector.vz, vz));
}
