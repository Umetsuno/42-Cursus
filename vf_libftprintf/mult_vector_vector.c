/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_vector_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:20:21 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:20:21 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	mult_vector_vector(t_vector3 vector, t_vector3 to_mult)
{
	return (mult_vector_coord(vector, to_mult.vx, to_mult.vy, to_mult.vz));
}
