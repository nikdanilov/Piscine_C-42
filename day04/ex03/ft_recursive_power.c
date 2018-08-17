/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 01:22:41 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/28 11:02:46 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}

int main()
{
printf("%d", ft_recursive_power(3, 4));
return (0);
}
