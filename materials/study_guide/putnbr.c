void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int	num;
	int			denom;

	num = nb;
	denom = 10;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		while (num / denom >= 10)
			denom *= 10;
		while (denom >= 10)
		{
			ft_putchar(num / denom + 48);
			num %= denom;
			denom /= 10;
		}
	}
	ft_putchar(num + 48);
}
