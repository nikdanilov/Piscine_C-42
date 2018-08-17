/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:25:46 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/29 00:50:47 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that displays all the digits
 * in decending order, followed by a new line.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int count = '9';

	while (count >= '0')
	{
		ft_putchar(count);
		count--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_countdown();
	return (0);
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: 9876543210$
 * good job! you got it!
 */
