/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:40:41 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 21:40:43 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATE_H
# define VALIDATE_H
# include "ft_list.h"

int		ft_validate_all(t_list *list);
int		ft_validate_row_numbers(int h1, char *str);
int		ft_validate_characters(t_list *list);
int		ft_validate_is_numeric(char *str);

#endif
