/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:38:29 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/02 20:19:27 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;
	int len;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	str = (int*)malloc(sizeof(*str) * (len));
	while (i < len)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
