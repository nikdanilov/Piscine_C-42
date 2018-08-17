/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 09:16:27 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:03:31 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		sign;
	int		ans;

	ans = 0;
	sign = 1;
	if (str)
	{
		while (*str && (*str == '\t' || *str == '\f' || *str == '\r'
					|| *str == '\n' || *str == '\v' || *str == ' '))
			str++;
		if (*str == '-' && str++)
			sign = -1;
		else if (*str == '+' && str++)
			sign = 1;
		while (*str && *str >= 48 && *str <= 57)
				ans = ans * 10 + (*str++ - '0');
	}
	printf("%d\n", (sign * ans));
	return (sign * ans);
}

int		main(void)
{
	ft_atoi("\n \t \t \v \f \r 		-0691");
	printf("%d\n", atoi(" \n \t \v \f \r  	-0619"));
	return 0;
}
