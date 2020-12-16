/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:19:54 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/16 17:55:20 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *nelem)
{
	if (nelem != NULL)
	{
		if (*alst != 0)
			ft_lstlast(*alst)->next = nelem;
		else
			*alst = nelem;
	}
}
