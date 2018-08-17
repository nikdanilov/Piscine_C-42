/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 20:32:20 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/29 12:00:30 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes a string and displays its
 * word, followed by a new line. A word is a section of
 * string delimited by spaces or tabs or by the start 
 * and end of a string. If the number of parameters is
 * not 1, or if there are no words, simply display a
 * new line.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	if (argc == 2)
	{
		i = 0;
		while(!(argv[1][i] == '\0' || argv[1][i] == '\t' || argv[1][i] == ' '))
		{
		ft_putchar(argv[1][i]);
		i++;
		}
	}
	ft_putchar('\n');
	return 0;
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: $
 * test this with ./<filename> "ShowMe the money" | cat -e
 		* and it should display: ShowMe$
 * test this with ./<filename> "google	...	the answer" | cat -e
 		* and it should display: google$
 * good job! you got it!
 */
