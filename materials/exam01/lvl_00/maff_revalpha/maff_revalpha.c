/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 20:13:34 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/23 20:31:37 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that displays the alphabet in reverse,
 * with the even letters in uppercase, and odd letters in
 * lowercase, followed by a newline.
 *
 * example:
 *
 * zYxWvU....dCbA$
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maff_revalpha(void)
{
	int ascii = 122;

	while (ascii >= 97)
	{
		if (ascii % 2 == 1)
		{
			ft_putchar(ascii - 32);
		}
		else
		{
			ft_putchar(ascii);
		}
		ascii--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_maff_revalpha();
	return 0;
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: zYxWvUtSrQpOnMlKjIhGfEdCbA$
 * good job! you got it!
 */
