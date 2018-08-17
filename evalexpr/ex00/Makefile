# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 17:51:55 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/12 17:51:56 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
SRCS = ./srcs/*.c
OBJECTS = *.o

all:
	gcc $(FLAGS) -c $(INCLUDES) main.c $(SRCS)
	gcc $(FLAG) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
