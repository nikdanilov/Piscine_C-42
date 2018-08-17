/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:47:59 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 14:48:00 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int		ft_square_max(int nc1)
{
	int		side;
	int		pass;

	pass = 0;
	if (g_map_length <= g_map_height)
		side = g_map_length;
	else
		side = g_map_height;
	while (pass == 0)
	{
		if ((side * side) > nc1)
			--side;
		else
			pass = 1;
	}
	return (side);
}
