/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_summand.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:53:00 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 17:53:01 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"
#include "utils.h"

int		parse_summand(char **str)
{
	int		n1;
	int		n2;
	char	operator;

	n1 = parse_factor(str);
	while (**str)
	{
		while (**str == ' ')
			++(*str);
		if (**str == '-' || **str == '+')
		{
			operator = **str;
			++*str;
			n2 = parse_factor(str);
			if (operator == '+')
				n1 = n1 + n2;
			else if (operator == '-')
				n1 = n1 - n2;
		}
		else
			return (n1);
	}
	return (n1);
}
