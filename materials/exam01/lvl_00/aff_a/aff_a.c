/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:37:12 by camirafl          #+#    #+#             */
/*   Updated: 2018/07/08 20:45:32 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a program that takes a string, and displays 
 * the first character 'a' it encounters followed by
 * a new line. If there are no 'a' characters in the
 * string, the program just writes a new line. If 
 * the number of parameters is not 1, the program
 * displays 'a' followed by a new line.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// ft_putchar exists for you to pass characters through
// so you can write them one at time.
// type in "man 2 write" in the terminal to pull up the manual

char	ft_aff_a(char *str)
{
	int i = 0; 						// declare integer 'i' is equal to 0

	while (str[i] != '\0') 			// while str[i] is NOT null terminator
	{
		if (str[i] == 'a') 			// if str[i] is equal to 'a'
		{
			ft_putchar('a');		// pass str[i] through ft_putchar to print
			break;					// break the loop so it only prints once
		}
		i++; 						// increment by 1 and loop
	}
	ft_putchar('\n'); 				// pass '\n' through ft_putchar to print
	return (*str); 					// return the value of *str
}

// ft_aff_a exists so we can process strings in a way
// that ft_putchar can use it to print.
// it uses arrays to do so
// don't know what arrays are?
// google knows :)
// ask and yee shall recieve
//
// in this case we create and declare a variable 'i' 
// as a way to count each individual character in an array
// so we can pass it through ft_putchar to print
// using '\0' (also known as a null terminator)
// as a marker so the computer knows where the string ends
// 
// don't know why null terminators exist?
// google knows :)

int		main(int argc, char **argv)

{
	if (argc == 2) 				// if argc is equal to 2
	{
		ft_aff_a(argv[1]); 		// run the function ft_aff_a with argv[1] as a parameter
	}
	else
	{
		ft_putchar('a'); 		// pass 'a' through ft_putchar to print
		ft_putchar('\n'); 		// pass '\n' through ft_putchar to print
	}
	return 0;
}

// argc is the argument count.
// an argument count can be understood as the following:
// when you run ./<filename> ... to execute a program, this is considered 1 argument
// when you run ./<filename> "whatever is in these quotes" this is considered 2 arguments
// when you run ./<filename> "whatever is in these quotes" "and these" this is considered 3 arguments
// argc essentially just keeps track of the number of arguments the user uses.
//
// the question says specifically asks us  "if the number of parameters is not 1"
// parameters (in this case) is the arguments that follows the initial command: ./<filename>
// so ./<filename> "whatever is in these quotes" is considered 1 parameter.
//
// **argv (argument vector) takes arguments as input
// argv takes .<filename> "whatever is in these quotes"
// and passes .<filename> as argv[0] and "whatever is in these quotes" as argv[1] as parameters
// 
// notice that **argv is a pointer to a pointer
// this pointer points to *str
// using this relationship, we can pass "whatever is in these quotes"
// as argv[1] through *str so we can print out the output using arrays




/*
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: a$
 * test this with ./<filename> "swarley" | cat -e
 		* and it should display: a$
 * test this with ./<filename> "sworley" | cat -e
 		* and it should display: $
 * good job! you got it!
 */
