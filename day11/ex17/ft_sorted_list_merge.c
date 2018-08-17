/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:45:12 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 18:45:24 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*current;

	if (!begin_list || !*begin_list)
		*begin_list = begin_list2;
	else
	{
		current = *begin_list;
		while (current->next)
			current = current->next;
		current->next = begin_list2;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list*ptr;
	t_list*ptr2;
	t_list*next;

	if (!begin_list || !*begin_list)
		return ;
	ptr = *begin_list;
	while (ptr)
	{
		ptr2 = *begin_list;
		while (ptr2->next)
		{
			if ((*cmp)(ptr2->data, ptr2->next->data) > 0)
			{
				next = ptr2->data;
				ptr2->data = ptr2->next->data;
				ptr2->next->data = next;
			}
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
