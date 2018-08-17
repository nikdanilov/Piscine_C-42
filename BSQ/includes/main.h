/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:55:18 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 16:55:19 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include "ft_list.h"

t_list	*ft_read_stdin(void);
t_list	*ft_file_read(char *filename);
void	ft_global_set(char *map);
char	*ft_map_create(t_list *list);
void	ft_metadata_read(t_list *list);
void	ft_square_show(char *str, int index, int size);
int		ft_square_find(char *str, int max);
int		ft_square_max(int nc1);

#endif
