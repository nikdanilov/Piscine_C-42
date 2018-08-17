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
	int		number;

	if (argc <= 2)
		write(2, "Option is missing.\n", 19);
	else if (argc <= 3)
		write(2, "File is missing.\n", 17);
	else
	{
		number = ft_atoi(argv[2]);
		if (number < 0)
			number *= -1;
		else if (*argv[2] == '+')
			number *= -1;
		ft_display_file(argv[4]);
	}
	return (0);
}
