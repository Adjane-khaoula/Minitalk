# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 16:38:04 by kadjane           #+#    #+#              #
#    Updated: 2022/08/05 19:15:54 by kadjane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = color.c fractol.c hook.c math.c ft_strncmp.c main.c ft_render.c ft_putstr.c fractol_bonus.c hook_bonus.c

NAME := fractol

OBJS = $(SRCS:.c=.o)
CC = gcc

CFLAGS := -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(CFLAGS) -I /usr/local/include -L /usr/local/lib/ -lmlx -framework OpenGL -framework AppKit -o $(NAME)
bonus : all

clean : 
	@rm -f *.o
fclean : clean
	@rm -f $(NAME)
re : fclean all
