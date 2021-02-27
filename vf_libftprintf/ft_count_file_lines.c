/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_file_lines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:39:45 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:39:46 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_count_file_lines(char *path)
{
	t_file			*file;
	t_read_status	read_status;
	ssize_t			counter;

	file = ft_open_file(path, O_RDONLY);
	counter = 0;
	read_status = ft_read_next_line(file);
	while (read_status)
	{
		counter++;
		read_status = ft_read_next_line(file);
	}
	ft_close_file(file);
	if (read_status == read_fail)
		return (read_fail);
	return (counter + 1);
}
