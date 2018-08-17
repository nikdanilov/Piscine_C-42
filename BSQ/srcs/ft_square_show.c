/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_square.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:47:21 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 22:15:07 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "utils.h"

void	ft_square_show_algrthm(int *i, int *size, char *square)
{
	int		x;
	int		y;

	x = 0;
	while (x < *size)
	{
		y = 0;
		while (y < *size)
		{
			square[(*i + x) + (g_map_length * y)] = g_character_3;
			++y;
		}
		++x;
	}
}

void	ft_square_show(char *str, int index, int size)
{
	int		i;
	char	*square;

	i = 0;
	square = malloc(sizeof(str) + 1);
	while (str[i])
	{
		if (i == index)
		{
			ft_square_show_algrthm(&i, &size, square);
		}
		else if (square[i] != g_character_3 && square[i] != '\n')
			square[i] = str[i];
		i++;
	}
	square[i] = '\0';
	ft_putstr(square);
}
