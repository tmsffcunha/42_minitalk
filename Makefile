# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 13:23:19 by lufiguei          #+#    #+#              #
#    Updated: 2024/09/20 19:11:42 by tfelguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -g
LIBFT			= libft/libft.a


NAMEC			= client
NAMES			= server
SRCC			= client.c
SRCS			= server.c
OBJC 			= $(SRCC:.c=.o)
OBJS 			= $(SRCS:.c=.o)


all:			$(NAMES) $(NAMEC)

$(NAMEC):		$(OBJC) $(LIBFT)
				$(CC) $(CFLAGS) $(OBJC) $(LIBFT) -o $(NAMEC)

$(NAMES):		$(OBJS) $(LIBFT)
				$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAMES)


# %.o: 			%.c
# 				$(CC) -c $(CFLAGS) $< -o $@

$(LIBFT):
				make -C libft

clean:
				$(RM) $(OBJS) $(OBJC) 
				make -C libft clean

fclean: 		clean
				$(RM) $(NAMES) $(NAMEC) 	
				make -C libft fclean

re: 			fclean all

.PHONY: 		all clean fclean re bonus
