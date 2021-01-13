/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 17:49:58 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_first_line_part(char *str)
{
	char	*result;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!(result = malloc((i + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*get_second_line_part(char *str)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	i++;
	if (!(result = malloc((ft_strlen(str) - i + 1) * sizeof(char))))
		return (0);
	j = 0;
	while (str[i + j])
	{
		result[j] = str[i + j];
		j++;
	}
	result[j] = '\0';
	free(str);
	str = 0;
	return (result);
}

int		get_next_line(int fd, char **line)
{
	static char	*backup;
	char		buffer[BUFFER_SIZE + 1];
	int			read_result;

	if (fd < 0 || !line || BUFFER_SIZE < 1 || read(fd, 0, 0) == -1)
		return (-1);
	read_result = 1;
	while (!contains_nl(backup) && read_result != 0)
	{
		if ((read_result = read(fd, &buffer, BUFFER_SIZE)) == -1)
			return (-1);
		buffer[read_result] = '\0';
		backup = ft_strjoin(backup, buffer);
	}
	*line = get_first_line_part(backup);
	if (read_result == 0)
	{
		free(backup);
		backup = 0;
		return (0);
	}
	backup = get_second_line_part(backup);
	return (1);
}
