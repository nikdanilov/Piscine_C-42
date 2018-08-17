/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 07:55:34 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:05:27 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i;
	int j;
	char *dest;

	i = 0;
	while (str[i])
	{
		i++;
	}
	dest = (char*)malloc(sizeof(str) * (i + 1));
	j = 0;
	while (str[j])
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	printf("%s\n", dest);
	return (dest);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_strdup(argv[1]);
	else
		printf("nice try guy\n");
	return 0;
}
