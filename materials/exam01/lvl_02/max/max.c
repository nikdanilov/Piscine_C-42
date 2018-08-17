/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:25:04 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/11 19:46:37 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int *tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int		max(int *tab, unsigned int len)
{
	unsigned int	index;
	int				max;

	index = 0;
	max = tab[0];
	while (index < len)
	{
		if (max < tab[index])	// every time copy is less than tab
			max = tab[index];	// set copy as that value because apparently size matters
		++index;					// increment to iterate through
	}
	if (index == len)
		return (max);				// when it's done with the loop, return cpy
	return (0);
}

/*

int		main(void)
{
	int result;

	int array[8] = {1, 2, 3, 4, 5, 6, 7, 0};
	
	result = max(array, 8);
	printf("%d\n", result);
	return (0);
}

*/
