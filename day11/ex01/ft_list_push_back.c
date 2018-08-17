/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:46:16 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 17:46:25 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list_elem;

	if (begin_list && *begin_list)
	{
		list_elem = *begin_list;
		while (list_elem->next)
			list_elem = list_elem->next;
		list_elem->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
