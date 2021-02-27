/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:20:03 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:20:05 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	create_vector(float vx, float vy, float vz)
{
	t_vector3	vector;

	vector.vx = vx;
	vector.vy = vy;
	vector.vz = vz;
	return (vector);
}
