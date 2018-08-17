/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:14:51 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:35:12 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		content(char *str, char c, int max)
{
	while (*str && max-- != 0)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

void	inter(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index])
	{
		if (content(s2, s1[index], -10))
			if (index == 0 || !content(s1, s1[index], index))
				ft_putchar(s1[index]);
		index++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return 0;
}
