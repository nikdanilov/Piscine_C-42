/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:52:15 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 17:52:16 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H

int		parse_atom(char **str);
int		parse_factor(char **str);
int		parse_summand(char **str);
int		eval_expr(char *str);

#endif
