/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:29:45 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 21:29:52 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "validate.h"
#include "utils.h"
#include "ft_list.h"

int		ft_validate_all(t_list *list)
{
	if (!(ft_validate_is_numeric(g_row_cnt) &&
		ft_validate_characters(list) &&
		ft_validate_row_numbers(g_map_height, g_row_cnt)))
	{
		write(2, "map error\n", 10);
		return (0);
	}
	return (1);
}
