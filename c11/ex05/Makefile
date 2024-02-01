SRC = ./srcs/calc.c ./srcs/do_op.c ./srcs/ft_atoi.c ./srcs/main.c ./srcs/put.c

OBJS = $(SRC:.c=.o)

HEAD = ./includes/

NAME = do-op

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	gcc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
