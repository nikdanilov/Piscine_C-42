/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:46:12 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 14:46:14 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "global.h"
#include "utils.h"
#include "ft_list.h"

char	*ft_map_create(t_list *list)
{
	int		i;
	char	*str;
	int		skip_header;

	if (!list)
		return (NULL);
	i = 0;
	skip_header = 0;
	str = (char*)malloc(sizeof(*str) * (ft_list_size(list) + 1));
	while (list)
	{
		if (skip_header)
		{
			str[i] = list->data;
			if (str[i] == g_character_1)
				++g_empty_spaces;
			i++;
		}
		if (list->data == '\n')
			skip_header = 1;
		list = list->next;
	}
	str[i] = '\0';
	return (str);
}
