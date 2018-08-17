/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 10:46:51 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/02 14:26:38 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_increment(char c)
{
	int i;

	i = 0;
	while (i++ < 13)
	{
		if (c + 1 == 123)
			c = 97;
		else if (c + 1 == 91)
			c = 65;
		else
			c++;
	}
	return (c);
}

char	ft_alpha(char *str)
{
	int i;
	int res;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			res = ft_increment(str[i]);
			ft_putchar(res);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			res = ft_increment(str[i]);
			ft_putchar(res);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}

int		main(int argc, char **argv)
{
	int i = 1;
	if (argc > 1)
	{
			ft_alpha(argv[1]);
	}
	else
		ft_putchar('\n');
	return 0;
}
