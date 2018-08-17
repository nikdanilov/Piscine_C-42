/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:55:10 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/01 21:32:13 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (i-- > 1)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
