char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	if (!*to_find)
		return (str);
	while (*str)
	{
		j = 0;
		while (*(str + j) == *(to_find + j))
		{
			if (!to_find[j + 1])
				return (str);
			j++;
		}
		str++;
	}
	return (0);
}
