# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 02:57:44 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/12 13:07:26 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
SRCS = ./srcs/*.c
UTILS = ./srcs/utils/*.c
RUSHES = ./srcs/rushes/*.c
OBJECTS = *.o

all:
	gcc $(FLAGS) -c $(INCLUDES) main.c $(SRCS) $(UTILS) $(RUSHES)
	gcc $(FLAG) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
