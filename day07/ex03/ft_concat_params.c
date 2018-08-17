/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 18:39:20 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/02 20:20:52 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*str;
	int		length;

	i = 1;
	length = 0;
	while (i < argc)
		length += (ft_strlen(argv[i++]) + 1);
	str = malloc(sizeof(char) * length + 1);
	i = 1;
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		if (i < argc - 1)
			str = ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
