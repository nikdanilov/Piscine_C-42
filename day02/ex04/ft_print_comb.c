/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:25:00 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/26 21:49:04 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int		x;
	char	i;
	char	j;
	char	k;

	x = 011;
	while (x++ < 789)
	{
		i = x / 100;
		j = x % 100 / 10;
		k = (x % 10) % 10;
		if (i < j && j < k)
		{
			ft_putchar('0' + i);
			ft_putchar('0' + j);
			ft_putchar('0' + k);
			if (i != 7)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}
