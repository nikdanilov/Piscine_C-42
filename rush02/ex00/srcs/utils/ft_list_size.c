/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:49:16 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:01:48 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list_ptr;
	int		count;

	count = 0;
	if (!begin_list)
		return (count);
	list_ptr = begin_list;
	while (list_ptr)
	{
		list_ptr = list_ptr->next;
		count++;
	}
	return (count);
}
