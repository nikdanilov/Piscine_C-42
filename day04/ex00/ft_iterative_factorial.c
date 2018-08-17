/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 00:01:48 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/28 03:04:20 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int f;
	int x;
	
	f = 1;
	x = nb;

	if (x >= 13 || x < 0) return (0);
	while (x > 1)
	{
		f = f * x;
		x--;
	}
	return (f);
}
