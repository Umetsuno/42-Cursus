/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:39:34 by faherrau          #+#    #+#             */
/*   Updated: 2021/02/22 15:39:36 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_close_file(t_file *file)
{
	if (close(file->c_fd) == 1)
		return (FALSE);
	file->c_fd = 0;
	if (file->c_file_path != 0)
		free(file->c_file_path);
	if (file->p_backup != 0)
		free(file->p_backup);
	if (file->readed_line != 0)
		free(file->readed_line);
	return (TRUE);
}
