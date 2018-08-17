/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:16:22 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/12 15:18:49 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_bitties(int octet, int size)
{

	if (size == 0)
		return;
	print_bitties(octet / 2, size - 1);		// recursion
	ft_putchar('0' + (octet % 2));
}

void	print_bits(unsigned char octet)
{
	print_bitties(octet, 8);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_bits(atoi(argv[1]));
	else
		ft_putchar('\n');
	return (0);
}
