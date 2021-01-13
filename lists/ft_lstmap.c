/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:20:42 by faherrau          #+#    #+#             */
/*   Updated: 2020/12/01 20:36:25 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;

	if (!lst || !f)
		return (0);
	new_list = 0;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new);
	}
	return (new_list);
}
