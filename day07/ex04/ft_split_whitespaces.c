/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:06:22 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/02 22:19:03 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_cnt_words(char *str)
{
	int		cnt;

	cnt = 0;
	while (*str++)
	{
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			cnt++;
			while (*str && *str != ' ' && *str != '\n' && *str != '\t')
				str++;
		}
	}
	return (cnt);
}

int		ft_word_length(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && *str)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char*) * ft_cnt_words(str) + 1);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && *str)
			i++;
		if (str[i])
		{
			k = 0;
			arr[j] = malloc(sizeof(char) * ft_word_length(str, i) + 1);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && *str)
				arr[j][k++] = str[i++];
			arr[j++][k] = '\0';
		}
	}
	arr[j] = NULL;
	return (arr);
}
