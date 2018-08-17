void	ft_putchar(char c);

void	ft_print(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **argv, int size)
{
	char	*tempptr;
	int		i;

	i = 0;
	while (++i < size - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tempptr = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tempptr;
			i = 0;
		}
	}
	ft_print(argv);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argv, argc);
	return (0);
}
