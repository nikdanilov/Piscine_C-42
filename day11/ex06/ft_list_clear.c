/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:36:09 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 18:36:11 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list_ptr;

	if (!begin_list || !*begin_list)
		return ;
	while (begin_list && *begin_list)
	{
		list_ptr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(list_ptr);
	}
	*begin_list = NULL;
}
