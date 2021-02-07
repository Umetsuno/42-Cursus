# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faherrau <faherrau@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 18:15:37 by faherrau          #+#    #+#              #
#    Updated: 2021/02/07 19:42:10 by faherrau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

./caracter


NAME		=	ft_printf.a

INCLUDES    =	-I ./
SRCS        = 	c_process.c \
				check_flag.c \
				check_type.c \
				create_formated_str \
				display.c \
				diuxx_processor.c \
				dot_parsing.c \
				ft_printf.c \
				minus_parsing.c \
				p_processor.c \
				parse_formated_str.c \
				pcrt_processor.c \
				preprocess.c \
				s_processor.c \
				process.c \
				star_parsing.c \
				utils.c \
				zero_parsing.c
				
				
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