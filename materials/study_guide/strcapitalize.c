char	*ft_strcapitalize(char *str)
{
	int	upper;

	upper = 1;
	while (*str)
		str++;
	while (*(str - 1))
	{
		if (*(str - 1) < 48)
		{
			if (*str >= 97 && *str <= 122)
				*str -= 32;
		}
		else if (*str >= 65 && *str <= 90)
			*str += 32;
		str--;
	}
	if (*str >= 97 && *str <= 122)
		*str -= 32;
	return (str);
}
