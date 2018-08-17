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
	if (argc == 2)
		ft_display_file(argv[1]);
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	return (0);
}
