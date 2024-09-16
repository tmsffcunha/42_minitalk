NAME = libftprintf.a

SRCS =	extra_function1.c extra_function2.c ft_printf.c

OBJS =	$(SRCS:.c=.o)

CC = cc

CFLAGS = -Wextra -Wall -Werror -g

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:	
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus