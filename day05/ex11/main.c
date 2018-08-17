/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:46:30 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/31 20:49:19 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(ft_str_is_alpha("999"));
	ft_putchar('\n');
	return (0);
}
