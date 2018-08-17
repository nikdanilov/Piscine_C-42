/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 23:33:16 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/04 23:33:21 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *r;
	int i;

	r = malloc(length * sizeof(*r));
	if (!r)
		return (NULL);
	i = 0;
	while (i < length)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}
