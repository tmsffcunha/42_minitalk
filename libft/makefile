# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 15:42:31 by tfelguei          #+#    #+#              #
#    Updated: 2024/09/20 19:04:51 by tfelguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = cc
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a
SRC = ft_isalpha.c\
ft_isalnum.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_strlen.c\
ft_strchr.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_tolower.c\
ft_toupper.c\
ft_memset.c\
ft_memmove.c\
ft_memcpy.c\
ft_memchr.c\
ft_memcmp.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_bzero.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putnbr_fd.c\
ft_putendl_fd.c\
ft_itoa.c\
ft_striteri.c\
ft_strmapi.c\
ft_substr.c\
ft_strtrim.c\
ft_strjoin.c\
ft_split.c\
ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstiter.c\
ft_lstmap.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	make -C $(PRINTF_DIR)
	cp $(PRINTF_DIR)/libftprintf.a libft.a
	rm $(PRINTF_DIR)/libftprintf.a

$(PRINTF): $(NAME)
	make -C $(PRINTF_DIR)
	rm -f $(NAME)
	mv $(PRINTF) $(NAME)

clean:
	rm -rf $(OBJS)
	make -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f libft.a
	make -C $(PRINTF_DIR) fclean

re: fclean all