/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 22:34:52 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/23 22:45:04 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * reproduce the behavior of the function strcpy (man strcpy)
 * your function should be declared as follows:
 *
 * char		*ft_strcpy(char *s1, char *s2);
 */

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
