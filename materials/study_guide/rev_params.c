void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (--argc > 0)
		ft_putstr(*(argv + argc));
	return (0);
}
