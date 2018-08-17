/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:48:42 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:01:25 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_create_elem(char c)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = c;
		elem->next = NULL;
	}
	return (elem);
}
