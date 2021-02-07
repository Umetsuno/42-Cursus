# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 18:15:37 by faherrau          #+#    #+#              #
#    Updated: 2021/02/07 21:29:43 by faherrau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

INCLUDES    =	-I ./
SRCS        = 	./memory/ft_bzero.c \
				./memory/ft_memset.c \
				./memory/ft_memcpy.c \
				./memory/ft_memccpy.c \
				./memory/ft_memmove.c \
				./memory/ft_memchr.c \
				./memory/ft_memcmp.c \
				./memory/ft_calloc.c \
				./checks/ft_isalpha.c \
				./checks/ft_isdigit.c \
				./checks/ft_isalnum.c \
				./checks/ft_isascii.c \
				./checks/ft_isprint.c \
				./characters/ft_toupper.c \
				./characters/ft_tolower.c \
				./converters/ft_atoi.c \
				./converters/ft_itoa.c \
				./strings/contains.c \
				./strings/ft_strlen.c \
				./strings/ft_strchr.c \
				./strings/ft_strrchr.c \
				./strings/ft_strncmp.c \
				./strings/ft_strcpy.c \
				./strings/ft_strlcpy.c \
				./strings/ft_strlcat.c \
				./strings/ft_strnstr.c \
				./strings/ft_strdup.c \
				./strings/ft_substr.c \
				./strings/ft_strjoin.c \
				./strings/ft_strtrim.c \
				./strings/ft_split.c \
				./strings/ft_strmapi.c \
				./files/ft_putchar_fd.c \
				./files/ft_putstr_fd.c \
				./files/ft_putendl_fd.c \
				./files/ft_putnbr_fd.c \
				./lists/ft_lstnew.c \
				./lists/ft_lstadd_front.c \
				./lists/ft_lstsize.c \
				./lists/ft_lstlast.c \
				./lists/ft_lstadd_back.c \
				./lists/ft_lstdelone.c \
				./lists/ft_lstclear.c \
				./lists/ft_lstiter.c \
				./lists/ft_lstmap.c \
				./maths/ft_abs.c \
				./maths/ft_min3.c \
				./GNL/get_next_line.c \
				./GNL/get_next_line_bonus.c \
				./display/ft_putnchar.c \
				./display/ft_putnchar_fd.c
				
OBJS        =	$(SRCS:.c=.o)

GCC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

.c.o:
	$(GCC) $(FLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all:	$(NAME) clean

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all bonus clean fclean re .c.o