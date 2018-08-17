/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 01:13:39 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/28 10:58:10 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 15)
		return (0);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
