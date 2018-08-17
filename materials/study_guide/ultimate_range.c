#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int i;
	int	*myrange;

	size = max - min;
	i = -1;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	myrange = (int*)malloc(sizeof(int) * (size));
	while (++i < size)
		myrange[i] = min + i;
	*range = myrange;
	return (size);
}
