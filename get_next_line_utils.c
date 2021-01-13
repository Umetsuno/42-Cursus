/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 05:18:06 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 17:49:57 by faherrau         ###   ########lyon.fr   */
=======
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:26:49 by faherrau          #+#    #+#             */
/*   Updated: 2021/01/11 13:17:49 by faherrau         ###   ########lyon.fr   */
>>>>>>> 72116887ef2e8a7e0dc75927d4033dbe989e0729
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
size_t	ft_strlen(const char *s)
{
	size_t length;

	if (!s)
		return (0);
	length = 0;
	while (s[length])
		length++;
	return (length);
}

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	src_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*append;
	int		append_size;

	if (!s1 && !s2)
		return (0);
	append_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(append = malloc(append_size * sizeof(char))))
	{
		free((void *)s1);
		return (0);
	}
	ft_strcpy(append, s1);
	ft_strcpy(&append[ft_strlen(s1)], s2);
	free((void *)s1);
	return (append);
}

int		contains_nl(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
=======
int		ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memset(void *target, int char_to_set, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = target;
	while (i < n)
	{
		str[i] = (unsigned char)char_to_set;
		i++;
	}
	return (target);
}

void	*ft_calloc(size_t quantity, size_t size)
{
	void	*allocated;
	size_t	i;

	i = size * quantity;
	if (!(allocated = malloc(i)))
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memset(allocated, 0, i);
	return (allocated);
}

char	*ft_strfjoin(char *s1, char *s2, int f)
{
	char	*result;
	size_t	result_size;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	result_size = ft_len(s1) + ft_len(s2) + 1;
	if (!(result = ft_calloc(result_size, sizeof(char))))
	{
		errno = ENOMEM;
		free(s2);
		s2 = NULL;
		return (NULL);
	}
	while (s1[++i])
		result[i] = s1[i];
	while (s2[j])
		result[i++] = s2[j++];
	result[i] = '\0';
	if (f >= 1)
		free(s1);
	if (f > 1)
		free(s2);
	return (result);
}

char	*ft_strfdup(char *src, int n, int f)
{
	int		i;
	char	*dup;

	if (n < 0)
	{
		i = ft_len(src) + 1;
		if (!(dup = (char*)malloc((i))))
		{
			errno = ENOMEM;
			free(src);
			src = NULL;
			return (NULL);
		}
		i = -1;
		while (src[++i])
			dup[i] = src[i];
	}
	else
	{
		if (!(dup = (char*)malloc(n + 1)))
		{
			errno = ENOMEM;
			free(src);
			src = NULL;
			return (NULL);
		}
		i = -1;
		while (++i < n)
			dup[i] = src[i];
	}
	dup[i] = '\0';
	if (f == 1)
		free(src);
	return (dup);
>>>>>>> 72116887ef2e8a7e0dc75927d4033dbe989e0729
}
