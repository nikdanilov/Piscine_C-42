/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 01:14:44 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/28 03:24:13 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 0;
	p = nb;
	if (power == 0) return (1);
	if (power == -1) return (0);
	while (++i < power)
		p = p * nb;
	return (p);
}
