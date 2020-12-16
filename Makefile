# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faherrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 18:15:37 by faherrau          #+#    #+#              #
#    Updated: 2020/12/16 19:14:02 by faherrau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

./caracter


NAME		=	libft.a

INCLUDES    =	-I ./
SRCS        = 	./memory_manip/ft_bzero.c \
				./memory_manip/ft_memset.c \
				./memory_manip/ft_memcpy.c \
				./memory_manip/ft_memccpy.c \
				./memory_manip/ft_memmove.c \
				./memory_manip/ft_memchr.c \
				./memory_manip/ft_memcmp.c \
				./memory_manip/ft_calloc.c \
				./checks/ft_isalpha.c \
				./checks/ft_isdigit.c \
				./checks/ft_isalnum.c \
				./checks/ft_isascii.c \
				./checks/ft_isprint.c \
				./char_manip/ft_toupper.c \
				./char_manip/ft_tolower.c \
				./converters/ft_atoi.c \
				./converters/ft_itoa.c \
				./string_manip/ft_strlen.c \
				./string_manip/ft_strchr.c \
				./string_manip/ft_strrchr.c \
				./string_manip/ft_strncmp.c \
				./string_manip/ft_strlcpy.c \
				./string_manip/ft_strlcat.c \
				./string_manip/ft_strnstr.c \
				./string_manip/ft_strdup.c \
				./string_manip/ft_substr.c \
				./string_manip/ft_strjoin.c \
				./string_manip/ft_strtrim.c \
				./string_manip/ft_split.c \
				./string_manip/ft_strmapi.c \
				./file_manip/ft_putchar_fd.c \
				./file_manip/ft_putstr_fd.c \
				./file_manip/ft_putendl_fd.c \
				./file_manip/ft_putnbr_fd.c \
				./lists_manip/ft_lstnew.c \
				./lists_manip/ft_lstadd_front.c \
				./lists_manip/ft_lstsize.c \
				./lists_manip/ft_lstlast.c \
				./lists_manip/ft_lstadd_back.c \
				./lists_manip/ft_lstdelone.c \
				./lists_manip/ft_lstclear.c \
				./lists_manip/ft_lstiter.c \
				./lists_manip/ft_lstmap.c
				
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