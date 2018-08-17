/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:47:44 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 22:20:32 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "main.h"
#include "utils.h"

void	ft_square_find_algrthm(int *i, int *check, char *str)
{
	int		x;
	int		y;

	x = 0;
	while (x <= g_square_size)
	{
		y = 0;
		while (y <= g_square_size)
		{
			if (str[(*i + x) + (g_map_length * y)] == g_character_1)
				++*check;
			else
			{
				*i = *i + x;
				y = g_square_size + 1;
				x = g_square_size + 1;
			}
			++y;
		}
		++x;
	}
}

int		ft_square_find(char *str, int max)
{
	int		i;
	int		check;
	int		final;

	i = 0;
	final = -1;
	while (g_square_size < max && str[i] &&
		g_square_size + (i / g_map_length) < g_map_height)
	{
		if (g_square_size + (i % g_map_length + 1) > g_map_length)
			i = (i / g_map_length + 1) * g_map_length;
		while (str[i] != g_character_1 && str[i] != '\0')
			i++;
		check = 0;
		ft_square_find_algrthm(&i, &check, str);
		if (check == (g_square_size + 1) * (g_square_size + 1))
		{
			final = i;
			++g_square_size;
		}
		else
			++i;
	}
	return (final);
}
