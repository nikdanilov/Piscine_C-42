/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:53:56 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 16:53:57 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "utils.h"
#include "ft_list.h"

t_list	*ft_file_read(char *filename)
{
	char	buf;
	int		file;
	int		skip_header;
	t_list	*list;

	list = NULL;
	skip_header = 0;
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (NULL);
	while (read(file, &buf, 1) > 0)
		ft_list_insert(&list, buf);
	close(file);
	return (list);
}
