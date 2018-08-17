/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:44:46 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/29 16:49:41 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes a string and displays it, replacing 
 * each of its letters by by the letter 13 places ahead in
 * alphabetical order. 'z' becomes 'm' and 'Z' becomes 'M'. case
 * remains unaffected. The output will be followed by a new line.
 * if the number of arguments is not 1, the program displays
 * a new line.
 */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot_13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(str[i] - 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i] - 13);
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}


/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: $
 * test this with ./<filename> "Pzv va gur Orqebbz" | cat -e
 		* and it should display: Cmi in the Bedroom$
 * test this with ./<filename> "TvG vG QbAr" | cat -e
 		* and it should display: GiT iT DoNe$
 * good job! you got it!
 */
