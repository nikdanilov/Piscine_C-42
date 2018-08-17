/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_characters.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:30:02 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 21:30:08 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "utils.h"
#include "ft_list.h"

int		ft_validate_characters(t_list *list)
{
	while (list->data != '\n')
		list = list->next;
	while (list->next != NULL)
	{
		if (list->data != g_character_1 &&
			list->data != g_character_2 &&
			list->data != '\n')
			return (0);
		list = list->next;
	}
	return (1);
}
