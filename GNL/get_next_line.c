/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 19:05:46 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 32

char	*get_first_part(char *str)
{
	char	*result;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	result = NULL;
	result = malloc((i + 1) * sizeof(char));
	if (result == NULL)
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

char	*get_second_part(char *str)
{
	char	*result;

	if (!str)
		return (0);
	ft_strcpy(str, &str[contains(str, '\n') + 1]);
	result = NULL;
	result = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (result == NULL)
		return (str);
	ft_strcpy(result, str);
	free(str);
	str = NULL;
	return (result);
}

int	normv2_sucks(int read_result, char **backup)
{
	if (read_result == 0)
	{
		free(*backup);
		*backup = NULL;
		return (0);
	}
	return (1);
}

int	normv2_sucks_2(char **backup, int fd, int read_result)
{
	char	buffer[BUFFER_SIZE + 1];

	while (contains(*backup, '\n') == -1 && read_result)
	{
		read_result = read(fd, &buffer, BUFFER_SIZE);
		if (read_result == -1)
			return (-1);
		buffer[read_result] = '\0';
		*backup = ft_strjoin(*backup, buffer);
		if (!*backup)
			return (-1);
	}
	return (read_result);
}

int	get_next_line(int fd, char **line)
{
	static char	*backup;
	int			read_result;

	*line = NULL;
	if ((fd < 0 || !line || BUFFER_SIZE < 1
			|| read(fd, 0, 0) == -1))
		return (-1);
	read_result = 1;
	read_result = normv2_sucks_2(&backup, fd, read_result);
	if (read_result == -1)
		return (-1);
	*line = get_first_part(backup);
	if (*line == NULL)
		return (-1);
	if (normv2_sucks(read_result, &backup) == 0)
		return (0);
	backup = get_second_part(backup);
	return (1);
}
