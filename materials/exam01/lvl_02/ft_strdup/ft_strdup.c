/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 17:23:06 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:05:46 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
voAssignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/





#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int j;
	char *dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char*)malloc(sizeof(src) * (i + 1));
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	printf("%s\n", dest);
	return (dest);
}

int		main(void)
{
	ft_strdup("yoyoyo");
	return 0;
}
