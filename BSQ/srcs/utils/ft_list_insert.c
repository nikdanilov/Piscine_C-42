/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:01:34 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:01:35 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_insert(t_list **begin_list, char c)
{
	t_list	*list_elem;

	if (begin_list && *begin_list)
	{
		list_elem = *begin_list;
		while (list_elem->next)
			list_elem = list_elem->next;
		list_elem->next = ft_list_create_elem(c);
	}
	else
		*begin_list = ft_list_create_elem(c);
}
