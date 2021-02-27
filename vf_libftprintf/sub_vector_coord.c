/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_vector_coord.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:20:58 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:20:59 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	sub_vector_coord(t_vector3 vector, float vx, float vy, float vz)
{
	return (create_vector(vector.vx - vx, vector.vy - vy, vector.vz - vz));
}
