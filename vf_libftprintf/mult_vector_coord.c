/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_vector_coord.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:20:12 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:20:12 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	mult_vector_coord(	\
	t_vector3 vector,			\
	float multx,				\
	float multy,				\
	float multz)
{
	return (create_vector(vector.vx * multx, vector.vy * multy,
			vector.vz * multz));
}
