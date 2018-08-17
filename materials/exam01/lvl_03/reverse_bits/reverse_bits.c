/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 11:12:40 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/05 21:57:38 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010

*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *hex_to_bin[] =
	{"0000","0001","0010","0011",
	"0100","0101","0110","0111",
	"1000","1001","1010","1011",
	"1100","1101","1110","1111"};

int		main(int argc, char **argv)
{
	int i;
	unsigned char byte;
	unsigned char result;

	if (argc < 1)
	{
		write(1, "error\n", 6);
		return 0;
	}
	byte = atoi(argv[1]);
	result = 0;
	for (i = 0; i < 4; i++)
	{
		result |= (byte &(1 << i )) << (7- (2 * i)) |
			(byte & (1 << (7 - i))) >> (7 - (2 * i));
	}
	printf("from %s %s to %s %s \n", hex_to_bin[byte >> 4],
						hex_to_bin[byte & 0xf],
						hex_to_bin[result >> 4],
						hex_to_bin[result & 0xf]);
	return (0);
}
