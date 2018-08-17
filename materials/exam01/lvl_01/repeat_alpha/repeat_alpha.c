/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 09:43:51 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/02 10:45:54 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int i;

	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			i = *str;
			while (i-- >= 65)
				ft_putchar(*str);
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			i = *str;
			while (i-- >= 97)
				ft_putchar(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (*str);
}
	
int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return 0;
}
