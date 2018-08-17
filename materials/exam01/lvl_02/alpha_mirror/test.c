/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:28:11 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/12 21:42:13 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('Z' - str[i] + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('z' - str[i] + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	else
		ft_putchar('\n');
	return 0;
}
