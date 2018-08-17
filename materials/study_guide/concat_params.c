#include <stdlib.h>

int		ft_len(int argc, char **argv)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		len++;
		while (argv[i][j])
		{
			len++;
			j++;
		}
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	*str;
	int		i;
	int		j;
	int		k;

	len = ft_len(argc, argv);
	str = (char*)malloc(sizeof(char) * (len));
	i = -1;
	j = 1;
	k = 0;
	while (++i < len - 1)
	{
		if (argv[j][k])
			str[i] = argv[j][k];
		else
		{
			str[i] = '\n';
			k = -1;
			j++;
		}
		k++;
	}
	str[i] = '\0';
	return (str);
}
