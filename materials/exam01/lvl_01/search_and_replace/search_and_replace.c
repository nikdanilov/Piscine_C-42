/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:04:59 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/09 18:43:52 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*search_and_replace(char *s1, char *s2, char *s3)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])	// if s1[i] at any point matches s2[0],
		{
			s1[i] = s3[0];	// replace s1[i] with s3[0]
		}
		i++;				// increment and iterate through
	}
	return (s1);
}

int		main(int argc, char **argv)
{
	char *temp;
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			temp = search_and_replace(argv[1], argv[2], argv[3]);
			ft_putstr(temp);
		}
	}
	ft_putstr("\n");
	return (0);
}
