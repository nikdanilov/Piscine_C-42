# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/04 22:35:23 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/07 16:22:16 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
LIB_NAME = libop.a
HEADERS = includes
FLAGS = -Werror -Wall -Wextra
SRC_FILES = ./srcs/ft_add.c ./srcs/ft_sub.c ./srcs/ft_mul.c ./srcs/ft_div.c ./srcs/ft_mod.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c
O_FILES = ft_add.o ft_sub.o ft_mul.o ft_div.o ft_mod.o ft_atoi.o ft_putnbr.o

all:
	gcc $(FLAGS) -I$(HEADERS) -c $(SRC_FILES)
	ar rc $(LIB_NAME) $(O_FILES)
	ranlib $(LIB_NAME)
	gcc $(FLAGS) main.c $(LIB_NAME) -o $(NAME)
clean:
	/bin/rm -f $(O_FILES) $(LIB_NAME) $(NAME)
