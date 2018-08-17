/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 19:33:43 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/03 22:29:47 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes a string and displays the
 * first 'z' character it encounters in it, followed by
 * a new line. If there are no 'z' characters in the
 * string, the program writes 'z' followed by a new line.
 * If the number of parameters is not 1, the program
 * displays 'z' followed by a new line.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_z(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			ft_putchar('z');
			break;
		}
		else
		{
			ft_putchar('z');
			break;
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_z(argv[0]);
	}
	else
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	return ('0');
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: z$
 * test this with ./<filename> "yolo" | cat -e
 		* and it should display: z$
 * test this with ./<filename> "shizzle my nizzle" | cat -e
 		* and it should display: z$
 * good job! you got it!
 */
