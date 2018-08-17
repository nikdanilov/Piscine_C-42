/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 02:59:02 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:09:07 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_output(int col, int row, int id, int match)
{
	if (match > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(id);
	ft_putstr("]");
	ft_putstr("[");
	ft_putnbr(col);
	ft_putstr("]");
	ft_putstr("[");
	ft_putnbr(row);
	ft_putstr("]");
}
