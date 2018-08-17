# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/04 22:35:23 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/07 23:36:43 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = includes
FLAGS = -Werror -Wall -Wextra
SRC_FILES = ./srcs/ft_putchar.c \
			./srcs/ft_putstr.c \
			./srcs/ft_strcmp.c \
			./srcs/ft_strlen.c \
			./srcs/ft_swap.c
O_FILES = 	ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o

all:
	gcc -c $(FLAGS) -I$(HEADERS) $(SRC_FILES)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
