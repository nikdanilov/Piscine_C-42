/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:53:27 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:57:42 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bitties(int octet, int size)
{
	if (size == 0)
		return ;
	print_bitties(octet / 2, size - 1);
	ft_putchar('0' + (octet % 2));
}

void	print_bits(unsigned char octet)
{
	print_bitties(octet, 8);
}

int 	main(void)
{
	print_bits(2);
	return 0;
}
