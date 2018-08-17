/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 20:00:08 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/23 20:12:12 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that displays the alphabet, with
 * even letters in uppercase, and odd letters in
 * lowercase, followed by a new line
 *
 * example:
 *
 * aBcDe....XyZ$
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maff_alpha(void)
{
	int ascii = 97;

	while (ascii <= 122)
	{
		if (ascii % 2 == 0)
		{
			ft_putchar(ascii - 32);
		}
		else
		{
			ft_putchar(ascii);
		}
		ascii++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_maff_alpha();
	return 0;
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: aBcDeFgHiJkLmNoPqRsTuVwXyZ$
 * good job! you got it!
 */
