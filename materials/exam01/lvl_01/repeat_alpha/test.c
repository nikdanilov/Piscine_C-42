/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:16:54 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/06 09:40:02 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(char *str)
{
	int i;
	int alpha;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			alpha = str[i];
			while (alpha-- >= 'A')
				ft_putchar(str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpha = str[i];
			while (alpha-- >= 'a')
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
