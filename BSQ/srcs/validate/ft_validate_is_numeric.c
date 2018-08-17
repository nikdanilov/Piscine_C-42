/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:30:20 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 21:30:26 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_validate_is_numeric(char *str)
{
	if (!(ft_str_is_numeric(str)))
		return (0);
	return (1);
}
