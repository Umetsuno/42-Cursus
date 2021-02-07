# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faherrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 18:15:37 by faherrau          #+#    #+#              #
#    Updated: 2021/02/07 16:07:07 by faherrau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

./caracter


NAME		=	ft_printf.a

INCLUDES    =	-I ./
SRCS        = 	./[...] \
				
				
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