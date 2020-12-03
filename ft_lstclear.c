/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:20:17 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 16:21:28 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *temp_l;

	current = *lst;
	temp_l = 0;
	while (current)
	{
		if (current->next)
			temp_l = current->next;
		else
			temp_l = 0;
		del(current->content);
		free(current);
		current = temp_l;
	}
	*lst = 0;
}
