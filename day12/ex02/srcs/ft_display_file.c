/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:18:40 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/09 17:38:09 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <fcntl.h>
#include <errno.h>

void	ft_display_file(char *name)
{
	int		file;
	ssize_t	bytes;
	char	buffer[28676];

	file = open(name, O_RDWR);
	if (file < 0)
	{
		write(2, "cat: ", 5);
		write(2, name, ft_strlen(name));
		if (errno == 21)
			write(2, ": Is a directory\n", 17);
		else
			write(2, ": No such file or directory\n", 28);
		return ;
	}
	while ((bytes = read(file, &buffer, 28676)))
		write(1, &buffer, bytes);
	close(file);
}
