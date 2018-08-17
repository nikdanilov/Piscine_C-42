/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:35:08 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/08 18:35:21 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*list_elem;

	if (ac <= 0)
		return (NULL);
	i = 0;
	tmp = NULL;
	while (i < ac)
	{
		list_elem = ft_create_elem(av[i]);
		list_elem->next = tmp;
		tmp = list_elem;
		i++;
	}
	return (list_elem);
}
