/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_row_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:30:34 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 21:30:40 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"
#include "utils.h"

int		ft_validate_row_numbers(int h1, char *str)
{
	int		h2;

	h2 = ft_atoi(str);
	if (h1 < 1 || h1 != h2)
		return (0);
	return (1);
}
