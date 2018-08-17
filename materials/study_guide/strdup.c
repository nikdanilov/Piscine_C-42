#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	ptr = (char*)malloc(sizeof(*ptr) * (len + 1));
	while (i < len)
		ptr[i] = src[i];
		i++;
	ptr[i] = '\0';
	return (ptr);
}
