/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 03:19:56 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/03 03:27:02 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maff_revalpha(void)
{
	int ascii;

	ascii = 122;
	while (ascii >= 97)
	{
		if (ascii % 2 == 1)
			ft_putchar(ascii - 32);
		else
			ft_putchar(ascii);
		ascii--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_maff_revalpha();
	return (0);
}
