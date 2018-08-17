# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 14:19:49 by ndanilov          #+#    #+#              #
#    Updated: 2018/08/09 16:34:25 by ndanilov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAGS = -Werror -Wall -Wextra
HEADERS = includes
SRCS = srcs/*.c

all:
	gcc $(FLAGS) -I$(HEADERS) main.c $(SRCS) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
