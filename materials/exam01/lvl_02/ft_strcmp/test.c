/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 07:45:56 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 07:53:59 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	printf("%d\n", (*s1 - *s2));
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_strcmp(argv[1], argv[2]);
	return 0;
}
