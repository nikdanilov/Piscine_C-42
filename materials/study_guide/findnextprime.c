long	ft_is_prime(long nb)
{
	int i;
	int	max;

	i = 1;
	max = nb / 2;
	if (nb < 2)
		return (0);
	while (++i <= max)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	long	num;

	num = nb;
	if (nb % 2 == 0)
		num += 1;
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(num) == 1)
			return (num);
		num += 2;
	}
}
