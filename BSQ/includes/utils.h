/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:55:25 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 16:55:26 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdlib.h>
# include "ft_list.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_length(char *str);
int		ft_height(char *str);
int		ft_str_is_numeric(char *str);
t_list	*ft_list_create_elem(char c);
int		ft_list_size(t_list *begin_list);
int		ft_list_firstline_size(t_list *begin_list);
void	ft_list_insert(t_list **begin_list, char c);

#endif
