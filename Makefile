# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 13:23:19 by lufiguei          #+#    #+#              #
#    Updated: 2024/09/11 15:54:23 by tfelguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc -g
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -fPIC
LIBFT			= libft/libft.a

# Mandatory part
NAMEC			= client
NAMES			= server
SRCC			= client.c
SRCS			= server.c
OBJC 			= $(SRCC:.c=.o)
OBJS 			= $(SRCS:.c=.o)

# Bonus part
NAMEC_B			= client_bonus
NAMES_B			= server_bonus
SRCC_B			= client_bonus.c
SRCS_B			= server_bonus.c
OBJC_B			= $(SRCC_B:.c=.o)
OBJS_B			= $(SRCS_B:.c=.o)

all:			$(NAMES) $(NAMEC)

$(NAMEC):		$(OBJC) $(LIBFT)
				$(CC) -o $@ $(OBJC) -Llibft -lft

$(NAMES):		$(OBJS) $(LIBFT)
				$(CC) -o $@ $(OBJS) -Llibft -lft

bonus:			$(NAMES_B) $(NAMEC_B)

$(NAMEC_B):		$(OBJC_B) $(LIBFT)
				$(CC) -o $@ $(OBJC_B) -Llibft -lft

$(NAMES_B):		$(OBJS_B) $(LIBFT)
				$(CC) -o $@ $(OBJS_B) -Llibft -lft

%.o: 			%.c
				$(CC) -c $(CFLAGS) $< -o $@

$(LIBFT):
				make -C libft

clean:
				$(RM) $(OBJS) $(OBJC) $(OBJS_B) $(OBJC_B)
				make -C libft clean

fclean: 		clean
				$(RM) $(NAMES) $(NAMEC) $(NAMES_B) $(NAMEC_B)
				make -C libft fclean

re: 			fclean all

.PHONY: 		all clean fclean re bonus
