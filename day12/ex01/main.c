/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:20:08 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/09 16:20:39 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
		ft_read_stdin();
	i = 0;
	while (++i < argc)
	{
		if (*argv[i] == '-')
			ft_read_stdin();
		else
			ft_display_file(argv[i]);
	}
	return (0);
}
