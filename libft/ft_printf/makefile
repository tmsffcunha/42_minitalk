NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc
LIBFT_DIR = ..
LIBFT = $(LIBFT_DIR)/libft.a
SRC = ft_printf.c \
      extra_function2.c \
      extra_function1.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) .
	ar x libft.a
	ar rcs $(NAME) $(OBJS) *.o
	rm -f libft.a *.o

# %.o: %.c
# 	$(CC) $(FLAGS) -c $< -o $@ -I$(LIBFT_DIR)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
