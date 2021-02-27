/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_vector_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:38:59 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:39:00 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	div_vector_vector(t_vector3 vector, t_vector3 to_div)
{
	return (div_vector_coord(vector, to_div.vx, to_div.vy, to_div.vz));
}
