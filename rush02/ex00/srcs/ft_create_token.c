/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_template.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:59:33 by mhassan           #+#    #+#             */
/*   Updated: 2018/08/12 16:32:06 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_create_token(t_list *list)
{
	int		i;
	char	*str;
	int		length;

	if (!list)
		return (NULL);
	i = 0;
	str = NULL;
	length = ft_list_size(list);
	str = (char*)malloc(sizeof(*str) * (length + 1));
	while (i < length)
	{
		str[i] = list->data;
		list = list->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}
