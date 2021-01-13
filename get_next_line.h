/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:35:23 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 17:51:57 by faherrau         ###   ########lyon.fr   */
=======
/*   By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:26:45 by faherrau          #+#    #+#             */
/*   Updated: 2021/01/11 12:45:11 by faherrau         ###   ########lyon.fr   */
>>>>>>> 72116887ef2e8a7e0dc75927d4033dbe989e0729
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
<<<<<<< HEAD

# include <unistd.h>
# include <stdlib.h>

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
=======
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# ifndef OPEN_MAX
#  define OPEN_MAX 4096
# endif
# define ERROR_FOUND -1

/*
**		GET_NEXT_LINE
*/

int		contain(char *str, char c);
int		check_save(int fd, char **line, char *save[4096]);
int		was_n_found(int fd, char **line, char *save[OPEN_MAX], char *buffer, int check);
int		get_next_line(int fd, char **line);

/*
**		UTILS
*/

int		ft_len(char *s1);
void	*ft_memset(void *target, int char_to_set, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strfjoin(char *s1, char *s2, int f);
char	*ft_strfdup(char *s1, int n, int f);

#endif
>>>>>>> 72116887ef2e8a7e0dc75927d4033dbe989e0729
