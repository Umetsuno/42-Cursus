/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math_pythagore.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:19:09 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/23 18:19:10 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_PYTHAGORE_H
# define LIBFT_MATH_PYTHAGORE_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Calculate distance without squareroot if you dont need more precision.
**	a * a + b * b = c * c.
**	./math/pythagore/distance_square2.c
*/
float	distance_square2(float a, float b);

/*
**	Calculate distance squarerooted if you need precision.
**	a * a + b * b = c * c.
**	./math/pythagore/distance2.c
*/
float	distance2(float a, float b);

/*
**	Calculate distance without squareroot if you dont need more precision.
**	a * a + b * b + c * c = d * d.
**	./math/pythagore/distance_square3.c
*/
float	distance_square3(float a, float b, float c);

/*
**	Calculate distance squarerooted if you need precision.
**	a * a + b * b + c * c = d * d.
**	./math/pythagore/distance3.c
*/
float	distance3(float a, float b, float c);

/*
**	Calculate distance without squareroot if you dont need
**	more precision beetween to points.
**	a * a + b * b = c * c.
**	./math/pythagore/distance_square_point3.c
*/
float	distance_square_point3(t_point3 point_a, t_point3 point_b);

/*
**	Calculate distance squarerooted if you need precision beetween to points.
**	a * a + b * b = c * c.
**	./math/pythagore/distance_point3.c
*/
float	distance_point3(t_point3 point_a, t_point3 point_b);

#endif
