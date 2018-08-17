/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_atom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:52:40 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 17:52:41 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"
#include "utils.h"

int		parse_atom(char **str)
{
	int		n;

	while (**str == ' ')
		++(*str);
	if (**str == '(')
	{
		++(*str);
		n = parse_summand(str);
		if (**str == ')')
			++(*str);
		return (n);
	}
	return (ft_atoi(str));
}
