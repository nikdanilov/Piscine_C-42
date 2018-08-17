/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 15:50:35 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/03 15:57:00 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_maff_alpha(void)
{
	int		ascii;

	ascii = 97;
	while (ascii <= 122 )
	{
		if (ascii % 2 == 0)
			ft_putchar(ascii - 32);
		else
			ft_putchar(ascii);
		ascii++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_maff_alpha();
	return (0);
}

