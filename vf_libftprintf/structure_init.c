/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:49:34 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/24 08:32:02 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_formated	generate_formated_structure(void)
{
	t_formated formated_structure;

	formated_structure.type = 0;
	formated_structure.minus = FALSE;
	formated_structure.minus_value = 0;
	formated_structure.star = FALSE;
	formated_structure.star_value = 0;
	formated_structure.dot = FALSE;
	formated_structure.dot_value = 0;
	formated_structure.zero = FALSE;
	formated_structure.zero_value = 0;
	return (formated_structure);
}
