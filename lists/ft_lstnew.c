/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:20:50 by faherrau          #+#    #+#             */
/*   Updated: 2020/11/30 19:20:52 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_elem;

	if (!(list_elem = malloc(sizeof(t_list))))
		return (0);
	list_elem->content = content;
	list_elem->next = 0;
	return (list_elem);
}
