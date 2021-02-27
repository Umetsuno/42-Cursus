/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:20:54 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:20:55 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	rotate_vector(	\
	t_vector3 vector,		\
	double xangle,			\
	double yangle,			\
	double zangle)
{
	t_vector3	result;

	result = rotate_vector_x(vector, xangle);
	result = rotate_vector_y(vector, yangle);
	result = rotate_vector_z(vector, zangle);
	return (result);
}
