/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/21 16:21:37 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_first_line(char *str)
{
	char	*result;
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!(result = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*get_second_line(char *str)
{
	char	*result;

	if (!str)
		return (0);
	ft_strcpy(str, &str[contains(str, '\n') + 1]);
	if (!(result = malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (str);
	ft_strcpy(result, str);
	free(str);
	str = NULL;
	return (result);
}

int		get_next_line(int fd, char **line)
{
	static char	*backup[OPEN_MAX];
	char		buffer[BUFFER_SIZE + 1];
	int			read_result;

	if ((*line = NULL) || fd < 0 || fd >= OPEN_MAX || !line
	|| BUFFER_SIZE < 1 || read(fd, 0, 0) == -1)
		return (-1);
	read_result = 1;
	while (contains(backup[fd], '\n') == -1 && read_result != 0)
	{
		if ((read_result = read(fd, &buffer, BUFFER_SIZE)) == -1)
			return (-1);
		buffer[read_result] = '\0';
		if (!(backup[fd] = ft_strjoin(backup[fd], buffer)))
			return (-1);
	}
	if (!(*line = get_first_line(backup[fd])))
		return (-1);
	if (read_result == 0)
	{
		free(backup[fd]);
		return ((int)(backup[fd] = NULL));
	}
	backup[fd] = get_second_line(backup[fd]);
	return (1);
}
