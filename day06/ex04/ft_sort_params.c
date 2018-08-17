/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 21:16:42 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/01 21:16:44 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char **argv)
{
	int i;

	i = 1;
	while (*argv)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]++);
		}
		i++;
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				i = 0;
			}
		}
		ft_print(argv);
	}
	return (0);
}
