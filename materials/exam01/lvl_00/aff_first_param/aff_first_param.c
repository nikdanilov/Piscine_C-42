/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:01:30 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/22 16:56:49 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes strings as arguments,
 * and displays its first argument followed by a 
 * new line. If the number of arguments is less
 * than 1, the program displays a new line.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_first_param(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_aff_first_param(argv[1]);
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
 * test this with ./<filename> "YouIsSexy" "Biatch" | cat -e
 		* and it should display: YouIsSexy$
 * good job! you got it! 
 */ 
