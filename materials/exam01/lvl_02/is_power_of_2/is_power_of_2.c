/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:11:12 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 08:38:10 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int        is_power_of_2(unsigned int n)
{
    return ((n != 0) && !(n & (n - 1)));
}

/*
int        main(int ac, char **av)
{
    int nbr = atoi(av[1]);
    printf("%d", is_power_of_2(nbr));
    return (0);
}
*/
