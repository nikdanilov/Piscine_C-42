/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:45:38 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/30 15:10:39 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	ft_putstr(ft_concat_params(argc, argv));
	return (0);
}
