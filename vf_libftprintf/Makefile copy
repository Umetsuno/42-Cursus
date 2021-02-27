# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faherrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 14:55:28 by faherrau          #+#    #+#              #
#    Updated: 2021/02/21 17:37:25 by faherrau         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

-include sources.mk

NAME		=	libft.a

INCLUDES	=	./includes
OBJS		=	$(SRCS:.c=.o)

GCC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

.c.o:
	$(GCC) $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

gmk:
	./scripts/generate-mk.sh

norminette: clean
	@echo " "
	norminettev2 sources
	@echo " "
	norminettev2 includes
	
export:
	./scripts/export.sh

end:
	./scripts/end.sh

.PHONY: all clean fclean re gmk norminette test export end
