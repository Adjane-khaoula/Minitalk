# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 16:38:04 by kadjane           #+#    #+#              #
#    Updated: 2022/08/20 00:09:19 by kadjane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_SERVER = ft_putstr.c ft_strlen.c ft_atoi.c  ft_itoa.c ft_strdup.c ft_strcat.c server.c
SRCS_CLIENT = ft_putstr.c ft_strlen.c ft_atoi.c  ft_itoa.c ft_strdup.c ft_strcat.c client.c

NAME := server client

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
CC = gcc

CFLAGS := -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS_SERVER) $(OBJS_CLIENT)
	@$(CC) $(OBJS_SERVER) $(CFLAGS) -o server
	@$(CC) $(OBJS_CLIENT) $(CFLAGS) -o client
bonus : all

clean : 
	@rm -f *.o
fclean : clean
	@rm -f $(NAME)
re : fclean all
