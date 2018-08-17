/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 23:39:35 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/24 00:10:36 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 /*
  * write a program that takes a string, and displays the string
  * in reverse followed by a new line. If the number of parameters
  * is not 1, the program displays a new line.
  */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rev_print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
		if (i < 0)
			break;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc  == 2)
	{
		ft_rev_print(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 				* and it should display: $
 * test this with ./<filename> "gninniw" | cat -e
 				* and it should display: winning$ 
 * good job! you got it!
 */
