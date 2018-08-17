/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:45:38 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/30 15:10:39 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		main(void)
{
	char	str1[14];

	strcpy(str1, "Hello World!");
	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
