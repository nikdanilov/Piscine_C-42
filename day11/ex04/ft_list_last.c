/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:50:20 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 17:50:21 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list_ptr;

	if (!begin_list)
		return (NULL);
	list_ptr = begin_list;
	while (list_ptr->next)
		list_ptr = list_ptr->next;
	return (list_ptr);
}
