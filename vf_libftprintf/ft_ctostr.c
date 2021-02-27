/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:39:51 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/27 20:28:18 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctostr(char c)
{
	char	*result;

	result = NULL;
	result = ft_strdup(" ");
	if (result != NULL)
		result[0] = c;
	return (result);
}
