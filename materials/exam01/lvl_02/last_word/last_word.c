/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:08:38 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/10 23:02:03 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/


#include <unistd.h>

int		check_spaces(char c)
{
	if (c == ' ' || c == '\t')						// if c is ever a <space> or <tab>
		return (1);									// return 1
	return (0);										// for all other scenarios, return 0
}

int		main(int argc, char **argv)
{
	if (argc == 2)									
	{
		while (*argv[1])							// while we iterate through argv[1]
			argv[1]++;								// increment until we finish iterating
		argv[1]--;									// go back one (to go one spot before the '\0')
		while (check_spaces(*argv[1]))				// if there is a <tab> or <space> at this point..
			argv[1]--;								// decrement argv[1]
		while (*argv[1] && !check_spaces(*argv[1]))	// while argv[1] iterates and there is no <tab> or <space>
			av[1]--;								// decrement some more.
		argv[1]++;									// at this point it should be a <tab> or <space> so increment
		while (*argv[1] && !check_spaces(*argv[1]))	// while it iterates through argv[1] and not <tab> or <space>
			write(1, argv[1]++, 1);					// write out argv[1] and increment
	}
	write(1, "\n", 1);
	return (0);
}
