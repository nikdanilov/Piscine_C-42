/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:04:02 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/09 20:04:43 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_print_error(char *filename)
{
	write(2, "tail: ", 6);
	write(2, filename, ft_strlen(filename));
	write(2, ": No such file or directory\n", 28);
}
