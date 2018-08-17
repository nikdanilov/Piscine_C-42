/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 00:28:37 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/29 00:52:42 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes a string and displays it,
 * replacing each of its letters by the next one in
 * alphabetical order. 'z' becomes 'a' and 'Z' becomes 'A'
 * case remains unaffected. The output will be followed
 * a '\n'. If the number of arguments is not 1, the program
 * displays '\n'
 *
 * examples:
 *
 * $> ./rotone "abc"
 *
 * bcd$
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rotone(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] < 'Z')
			ft_putchar(str[i] + 1);
		else if (str[i] >= 'a' && str[i] < 'z')
			ft_putchar(str[i] + 1);
		else if (str[i] == 'Z')
			ft_putchar('A');
		else if (str[i] == 'z')
			ft_putchar('a');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	else
		ft_putchar('\n');
	return 0;
}

/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: $
 * test this with ./<filename> "zab" | cat -e
 		* and it should display: abc$
 * good job! you got it!
 */

