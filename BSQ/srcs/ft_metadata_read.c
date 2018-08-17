/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_metadata.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 20:15:55 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 20:15:57 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "global.h"
#include "utils.h"
#include "ft_list.h"

void	ft_metadata_read(t_list *list)
{
	int		i;
	int		length;

	if (!list)
		return ;
	i = 0;
	length = ft_list_firstline_size(list);
	g_row_cnt = malloc(sizeof(char) * length - 2);
	while (i < length)
	{
		while (i < length - 3)
		{
			g_row_cnt[i] = list->data;
			list = list->next;
			i++;
		}
		if (i == length - 3)
			g_character_1 = list->data;
		if (i == length - 2)
			g_character_2 = list->data;
		if (i == length - 1)
			g_character_3 = list->data;
		list = list->next;
		i++;
	}
}
