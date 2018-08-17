/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 23:46:36 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/04 23:46:39 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/do_op.h"

char	g_operators[] =
{
	'+',
	'-',
	'*',
	'/',
	'%',
	'\0'
};

void	(*g_operations[])(int, int) =
{
	&ft_add,
	&ft_sub,
	&ft_mul,
	&ft_div,
	&ft_mod,
	0
};

int		main(int argc, char **argv)
{
	int i;

	if (argc != 4)
		return (0);
	if (argv[2][0] && !argv[2][1])
	{
		i = 0;
		while (g_operators[i])
		{
			if (argv[2][0] == g_operators[i])
			{
				g_operations[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
	}
	write(1, "0", 1);
	write(1, "\n", 1);
}
