#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	size;

	i = -1;
	size = max - min;
	if (size <= 0)
		return (0);
	ptr = (int*)malloc(sizeof(*ptr) * (size));
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
