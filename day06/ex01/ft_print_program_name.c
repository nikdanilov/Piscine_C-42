/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:50:10 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/01 20:50:19 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc >= 1)
	{
		while (*argv[0])
		{
			ft_putchar(*argv[0]);
			argv[0]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
