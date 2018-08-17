/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:53:54 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/13 07:26:32 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/


// DOUBLE CHECK THIS QUESTION ONLINE
// not sure if you are allowed atoi.

#include <stdio.h>
#include <stdlib.h>

void	do_op(char *nb1, char *op, char *nb2)
{
	int n1;
	int n2;
	int r;

	n1 = atoi(nb1);
	n2 = atoi(nb2);
	r = 0;
	if (op[0] == '+')
		r = n1 + n2;
	else if (op[0] == '-')
		r = n1 - n2;
	else if (op[0] == '*')
		r = n1 * n2;
	else if (op[0] == '/')
		r = n1 / n2;
	else if (op[0] == '%')
		r = n1 % n2;
	printf("%d\n", r);
}

int	main(int argc, char **argv)
{
  if (argc == 4)
    do_op(argv[1], argv[2], argv[3]);
  else
    printf("\n");
  return (0);
}
