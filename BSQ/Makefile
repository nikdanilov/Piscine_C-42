# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 16:54:28 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/15 16:54:29 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
SRCS = ./srcs/*.c
UTILS = ./srcs/utils/*.c
VALID = ./srcs/validate/*.c
OBJECTS = *.o

all:
	gcc $(FLAGS) -c $(INCLUDES) main.c $(SRCS) $(UTILS) $(VALID)
	gcc $(FLAG) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
