/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 10:42:47 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/02 11:41:22 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	while (*str)
	{
		*str = *src;
		str++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_strdup(argv[1]);
	else
		printf("nice try guy\n");
	return 0;
}