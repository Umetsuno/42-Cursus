/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vector_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:19:17 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:19:18 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	add_vector_vector(	\
	t_vector3 vector,			\
	t_vector3 to_add)
{
	return (add_vector_coord(vector, to_add.vx, to_add.vy, to_add.vz));
}
