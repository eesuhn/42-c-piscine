# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 21:21:24 by yilim             #+#    #+#              #
#    Updated: 2024/01/30 21:26:15 by yilim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS	= $(SRC:.c=.o)

HEAD	= ./includes/

NAME	= libft.a

AR	= ar rcs

RM	= rm -f

LIB	= ranlib

GCC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME):    $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean:      
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
