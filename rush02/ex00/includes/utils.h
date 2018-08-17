/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:09:49 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:09:50 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdlib.h>
# include "ft_list.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcnt_rows(char *str);
int		ft_strcnt_cols(int length, int row);
t_list	*ft_list_create_elem(char c);
int		ft_list_size(t_list *begin_list);
void	ft_list_insert(t_list **begin_list, char c);
void	ft_output(int col, int row, int id, int match);

#endif
