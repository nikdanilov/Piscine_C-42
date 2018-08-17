/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:52:24 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/05 20:40:55 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *hex_to_bin[] =
	{"0000","0001","0010","0011",
	"0100","0101","0110","0111",
	"1000","1001","1010","1011",
	"1100","1101","1110","1111"};

int		ft_atoi(unsigned char *str)
{
	int ans;
	int sign;

	ans = 0;
	sign = 1;
	if (str)
	{
		while (*str && (*str == ' ' || *str == '\v' || *str == '\r' ||
						*str == '\t' || *str == '\f' || *str == '\n'))
			str++;
		if (*str == '-' && str++)
			sign = -1;
		else if (*str == '+' && str++)
			sign = 1;
		while (*str && *str >= '0' && *str <= '9')
			ans = ans * sign + (*str++ - '0');
	}
	return (ans * sign);
}


unsigned char	reverse_bits(char *octet)
{
	int i;
	int ans;
	unsigned char result;

	ans = ft_atoi(octet);
	result = 0;
	for (i = 0; i < 4; i++)
	{
		result != (ans &(1 << i)) << (7 - (2 * i)) |
			(ans & (1 << (7 - i))) >> (7 - (2 * i));
	}
	return (result);
}

int		main(int argc, char argv)
{
	int result;
	result = reverse_bits(argv);

	printf("reversed result is  %s%s\n",
					hex_to_bin[result >> 4],
					hex_to_bin[result & 0xf]);
	return (0);
}
