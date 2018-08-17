/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:09:56 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:09:57 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "ft_list.h"

t_list	*ft_read_stdin(void);
char	*ft_create_token(t_list *list);
void	ft_check_rush(char *str);

#endif
