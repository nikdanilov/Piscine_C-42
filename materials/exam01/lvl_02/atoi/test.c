/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 07:27:01 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 07:44:52 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int ans;
	int sign;

	ans = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\f'
				|| *str == '\r' || *str == '\n' || *str == '\v'))
		str++;
	if (*str == '-' && str++)
		sign = -1;
	else if (*str == '+' && str++)
		sign = 1;
	while (*str && *str >= '0' && *str <= '9')
		ans = ans * 10 + (*str++ - '0');
	printf("this is ans: %d\n", (ans * sign));
	return (ans * sign);
}

int		main(void)
{
	printf("%d\n", atoi("-0619"));
	printf("%d\n", atoi("\t \n \f \r \v  	691"));
	ft_atoi("-0619");
	ft_atoi("\t \n \f \r \v  	691");
	return 0;
}
