/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:42:14 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/09 22:45:18 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		content(char *str, char c, int max)
{
	while (*str && max-- != 0)
						// while str != '\0' 
						// && while as we decrement max and it is NOT 0;
	{
		if (*str == c) 	// if as it iterates through *str and *str == c
			return (1);	// return a 1
		str++; 			// increment str
	}
	return (0);			// return a 0
}

void	inter(char *str, char *str2)
{
	int		index;

	index = 0;
	while (str[index])	// while str[index] != '\0'
	{
		if (content(str2, str[index], -1))	
						// if as we iterate through str... and we find str2 = str...
						// *note* the -1 is there so that it iterates through all of str2
			if (index == 0 || content(str, str[index], index) == 0)
						// if index == 0 OR if when we call content(<input>) == 0
				ft_putchar(str[index]); // then print str[index]
		index++; 		// increment index and loop through every letter
	}
	ft_putchar('\n'); 	// print break line
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return 0;
}
