char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (*(src + j) && j < nb)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
