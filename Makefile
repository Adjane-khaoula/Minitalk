# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 16:38:04 by kadjane           #+#    #+#              #
#    Updated: 2022/08/22 19:03:24 by kadjane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_SERVER = ft_putstr.c ft_strlen.c ft_atoi.c  ft_itoa.c ft_strdup.c ft_strcat.c server.c
SRCS_CLIENT = ft_putstr.c ft_strlen.c ft_atoi.c  ft_itoa.c ft_strdup.c ft_strcat.c client.c

SRCS_SERVER_BONUS = ft_putstr.c ft_strlen.c ft_atoi.c  ft_itoa.c ft_strdup.c ft_strcat.c server_bonus.c
SRCS_CLIENT_BONUS = ft_putstr.c ft_strlen.c ft_atoi.c  ft_itoa.c ft_strdup.c ft_strcat.c client_bonus.c

NAME := server client

NAME_BONUS :=  server_bonus client_bonus

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

OBJS_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)
OBJS_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)

CC = gcc

CFLAGS := -Wall -Wextra -Werror 

all: $(NAME) $(NAME_BONUS)

$(NAME): $(OBJS_SERVER) $(OBJS_CLIENT)
	@$(CC) $(OBJS_SERVER) $(CFLAGS) -o server
	@$(CC) $(OBJS_CLIENT) $(CFLAGS) -o client
	
$(NAME_BONUS):  $(OBJS_SERVER_BONUS) $(OBJS_CLIENT_BONUS)
	@$(CC) $(OBJS_SERVER_BONUS) $(CFLAGS) -o server_bonus
	@$(CC) $(OBJS_CLIENT_BONUS) $(CFLAGS) -o client_bonus
	
bonus : all

clean : 
	@rm -f *.o
fclean : clean
	@rm -f $(NAME) $(NAME_BONUS)
re : fclean all
