/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:00:08 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/12 21:14:42 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_str(char *str, char c, int len)
{
	int index;

	index = 0;
	while (index < len)
	{
		if (str[index] == c)
			return 0;
		index++;
	}
	return 1;
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int length;

	length = 0;
	while (s1[length])
	{
		if (check_str(s1, s1[length], length) == 1)
			ft_putchar(s1[length]);
		length++;
	}
	i = 0;
	while (s2[i])
	{
		if (check_str(s2, s2[i], i) == 1)
			if (check_str(s1, s2[i], length) == 1)
				ft_putchar(s2[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return 0;
}
