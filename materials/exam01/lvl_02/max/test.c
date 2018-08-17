/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:18:47 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/12 21:27:25 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	unsigned int	index;
	int				max;

	index = 0;
	max = tab[0];
	while (index < len)
	{
		if (max < tab[index])
			max = tab[index];
		index++;
	}
	if (index == len)
	{
		printf("%d\n", max);
		return (max);
	}
	return (0);
}

int		main(void)
{
	int tab[4] = {1, 2, 8, 4};

	max(tab, 4);
	return 0;

}
