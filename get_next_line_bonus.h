/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:13:26 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 17:52:14 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

/*
**			GET_NEXT_LINE.C CONTENT
*/

int		get_next_line(int fd, char **line);

/*
**			GET_NEXT_LINE_UTILS.C CONTENT
*/

size_t	ft_strlen(const char *s);
size_t	ft_strcpy(char *dst, const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
int		contains_nl(char *str);

#endif
