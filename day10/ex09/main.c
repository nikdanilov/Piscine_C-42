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

#include "ft_opp.h"

int		main(int argc, char **argv)
{
	int i;

	if (argc != 4)
		return (0);
	i = 0;
	while (g_opptab[i].op)
	{
		if (ft_strcmp(argv[2], g_opptab[i].op) == 0)
		{
			g_opptab[i].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	if (argv[2])
		g_opptab[5].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else {
		write(1, "0", 1);
		write(1, "\n", 1);
	}
}
