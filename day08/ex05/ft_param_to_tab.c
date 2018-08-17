/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 00:46:41 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/03 23:29:43 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*r;
	int					i;
	int					j;

	if (!(r = malloc(sizeof(*r) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		r[i].size_param = 0;
		while (av[i][r[i].size_param])
			r[i].size_param++;
		r[i].str = av[i];
		if (!(r[i].copy = malloc(r[i].size_param + 1)))
			return (NULL);
		j = -1;
		while (++j < r[i].size_param + 1)
			r[i].copy[j] = av[i][j];
		r[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	r[ac].str = 0;
	return (r);
}
