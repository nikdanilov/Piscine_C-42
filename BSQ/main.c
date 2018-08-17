/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:53:22 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 16:53:24 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "global.h"
#include "main.h"
#include "utils.h"
#include "validate.h"

int		main(int argc, char **argv)
{
	int		i;
	t_list	*f;
	char	*map;

	i = 0;
	while (i < argc)
	{
		i++;
		if (i > 0)
			ft_putchar('\n');
		f = argc == 1 ? ft_read_stdin() : ft_file_read(argv[i]);
		map = ft_map_create(f);
		ft_global_set(map);
		ft_metadata_read(f);
		if (!(ft_validate_all(f)))
		{
			i++;
			continue ;
		}
		g_square_max = ft_square_max(g_empty_spaces);
		g_square_position = ft_square_find(map, g_square_max);
		ft_square_show(map, g_square_position, g_square_size);
	}
	return (0);
}
