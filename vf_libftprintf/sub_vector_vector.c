/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_vector_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:21:03 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:21:03 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	sub_vector_vector(t_vector3 vector, t_vector3 to_sub)
{
	return (sub_vector_coord(vector, to_sub.vx, to_sub.vx, to_sub.vx));
}
