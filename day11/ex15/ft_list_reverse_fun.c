/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:43:41 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 18:43:48 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	void	*tmp;
	int		count;
	t_list	*current;

	count = 0;
	current = begin_list;
	while (current && ++count)
		current = current->next;
	i = 0;
	while (i < count - 1)
	{
		j = i;
		current = begin_list;
		while (current && current->next && j < count - 1)
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = current->next;
			j++;
		}
		i++;
	}
}
