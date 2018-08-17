/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:46:28 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/22 16:58:52 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes the string as arguments,
 * and displays its last argument followed by a new line.
 * If the number of arguments is less than 1, then the
 * program displays a new line.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_last_param(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_aff_last_param(argv[argc - 1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
