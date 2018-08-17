/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:06:05 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:12:30 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int index;
	int length;
	char temp;

	length = 0;
	while (str[length])
	{
		length++;
	}
	index = -1;
	while (++index < --length)
	{
		temp = str[index];
		str[index] = str[length];
		str[length] = temp;
	}
	printf("%s\n", str);
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_strrev(argv[1]);
	else
		printf("nicetryguy\n");
	return 0;
}
