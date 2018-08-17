/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 18:09:33 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/02 18:09:35 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
	}
	arr = (int*)malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (i);
}
