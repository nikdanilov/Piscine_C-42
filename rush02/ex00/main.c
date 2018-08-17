/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 02:56:18 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 02:56:19 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "utils.h"
#include "ft_list.h"

int		main(void)
{
	t_list	*stdin;
	char	*token;

	stdin = ft_read_stdin();
	token = ft_create_token(stdin);
	if (!token)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	ft_check_rush(token);
	ft_putchar('\n');
	return (0);
}
