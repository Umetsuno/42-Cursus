/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:23:50 by faherrau          #+#    #+#             */
/*   Updated: 2021/01/11 13:16:04 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		contain(char *str, char c)
{
	int i;

	if (!(str))
		return (0);
	i = 0;
	while (str[i])
		if (c == str[i++])
			return (i);
	return (0);
}

int		check_save(int fd, char **line, char *save[OPEN_MAX])
{
	char *tmp;

	if (save[fd])
	{
		if (contain(save[fd], '\n'))
		{
			if (!(*line = ft_strfjoin(*line,
					ft_strfdup(save[fd], contain(save[fd], '\n') - 1, 0), 2)))
				return (-1);
			if (!(tmp = ft_strfdup(&(save[fd][contain(save[fd], '\n')]), -1, 0)))
				return (-1);
			free(save[fd]);
			save[fd] = NULL;
			save[fd] = tmp;
			return (1);
		}
		else
		{
			if (!(*line = ft_strfjoin(*line, save[fd], 2)))
				return (-1);
		}
	}
	return (0);
}

int		was_n_found(int fd, char **line, char *save[OPEN_MAX], char *buffer, int check)
{
	if (check == 1)
	{
		*line = ft_strfjoin(*line,
			ft_strfdup(buffer, contain(buffer, '\n') - 1, 0), 2);
		save[fd] = ft_strfdup(&buffer[contain(buffer, '\n')], -1, 0);
	}
	else
	{
		*line = ft_strfjoin(*line, buffer, 1);
		return (0);
	}
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char	*save[OPEN_MAX];
	char		buffer[BUFFER_SIZE + 1];
	int			readed_value;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (ERROR_FOUND);
	if (!(*line = ft_strfdup("", -1, 0)))
		return (ERROR_FOUND);
	ft_memset(buffer, 0, BUFFER_SIZE + 1);
	if ((readed_value = check_save(fd, line, save)) != 0)
		return (readed_value);
	readed_value = read(fd, buffer, BUFFER_SIZE);
	while (readed_value > 0 && !contain(buffer, '\n'))
	{
		*line = ft_strfjoin(*line, buffer, 1);
		ft_memset(buffer, 0, BUFFER_SIZE + 1);
		readed_value = read(fd, buffer, BUFFER_SIZE);
	}
	if (contain(buffer, '\n'))
		return (was_n_found(fd, line, save, buffer, 1));
	if (readed_value == 0)
		return (was_n_found(fd, line, save, buffer, 0));
	free(save[fd]);
	save[fd] = NULL;
	return (ERROR_FOUND);
}
