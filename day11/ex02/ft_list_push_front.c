/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:47:52 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 17:47:54 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list_elem;

	if (*begin_list)
	{
		list_elem = ft_create_elem(data);
		list_elem->next = *begin_list;
		*begin_list = list_elem;
	}
	else
		*begin_list = ft_create_elem(data);
}
