# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/04 22:35:23 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/04 22:35:25 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op
HEADERS = includes
FLAGS = -Werror -Wall -Wextra
SRC_FILES = ./srcs/ft_sub.c \
			./srcs/ft_add.c \
			./srcs/ft_mul.c \
			./srcs/ft_div.c \
			./srcs/ft_mod.c \
			./srcs/ft_atoi.c \
			./srcs/ft_usage.c \
			./srcs/ft_putnbr.c \
			./srcs/ft_strcmp.c 

all:
	gcc $(FLAGS) -I$(HEADERS) main.c $(SRC_FILES) -o $(NAME)
clean:
	/bin/rm -f $(NAME)
