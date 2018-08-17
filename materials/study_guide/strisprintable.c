int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 127)
			str++;
		else
			return (0);
	}
	return (1);
}
