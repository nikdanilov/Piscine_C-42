char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && *(dest + i))
	{
		*(src + i) ? (*(dest + i) = *(src + i))\
			: *(dest + i) = '\0';
	}
	if (*(src + i) && i < n)
		*(dest + i) = *(src + i);
	return (dest);
}
