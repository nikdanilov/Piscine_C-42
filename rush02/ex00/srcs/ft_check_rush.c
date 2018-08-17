/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:00:09 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:00:13 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "rushes.h"

void	ft_check_rush(char *token)
{
	int		i;
	int		cols;
	int		rows;
	int		match;
	char	*(*ptr[5])(int, int);

	i = 0;
	match = 0;
	ptr[0] = ft_rush00;
	ptr[1] = ft_rush01;
	ptr[2] = ft_rush02;
	ptr[3] = ft_rush03;
	ptr[4] = ft_rush04;
	rows = ft_strcnt_rows(token);
	cols = ft_strcnt_cols(ft_strlen(token), rows);
	while (i < 5)
	{
		if (ft_strcmp(token, (*ptr[i])(cols, rows)) == 0)
			ft_output(cols, rows, i, ++match);
		i++;
	}
	if (match == 0)
		ft_putstr("aucune");
}
