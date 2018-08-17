/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_global_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:25:02 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 23:25:03 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "utils.h"

void	ft_global_set(char *map)
{
	g_row_cnt = "";
	g_character_1 = '\0';
	g_character_2 = '\0';
	g_character_3 = '\0';
	g_map_length = 0;
	g_map_height = 0;
	g_square_max = 0;
	g_square_size = 0;
	g_square_position = 0;
	g_map_length = ft_length(map);
	g_map_height = ft_height(map);
}
