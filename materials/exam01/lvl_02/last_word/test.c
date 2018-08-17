/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 08:41:01 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:48:50 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_spaces(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	return 0;	
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		argv[1]--;
		while (*argv[1] && check_spaces(*argv[1]))
			argv[1]--;
		while (*argv[1] && !check_spaces(*argv[1]))
			argv[1]--;
		argv[1]++;
		while (*argv[1] && !check_spaces(*argv[1]))
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return 0;
}
