/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:08:36 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:13:59 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------
/*
Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

char		*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp;

	length = 0;
	while (str[length] != '\0')
		length++;
	i = -1;							// i starts at -1 because they use prefix ++i
	while (++i < --length)			// ++i is prefix 1 + i (instead of i + 1)
	{
		temp = str[i];				// store the value of str[i] into temp
		str[i] = str[length];		// then store the value of str[length] into str[i]
		str[length] = temp;			// and then store the value of temp into str[length]
	}
	return (str);
}
