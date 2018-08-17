/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:20:51 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/11 20:56:40 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)							// standard write function
{
	write(1, &c, 1);
}

int		check_str(char *str, char c, int index)		// takes a string and checks the given input
{
	int		i;

	i = 0;
	while (i < index)								// while it iterates through the string
	{
		if (str[i] == c)							// if at any point str[i] == c
			return (0);								// return 0
		i++;										// loop increment to check the entire string
	}
	return (1);										// else return 1
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		len;

	i = 0;
	while (s1[i])
	{
		if (check_str(s1, s1[i], i) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	len = i;
	i = 0;
	while (s2[i])
	{
		if (check_str(s2, s2[i], i) == 1)
			if (check_str(s1, s2[i], len) == 1)
				ft_putchar(s2[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
