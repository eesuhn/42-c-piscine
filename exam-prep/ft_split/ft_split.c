#include <stdlib.h>

int	ft_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

int	ft_size(char *str)
{
	int	i;
	int	size;

	i = -1;
	size = 0;
	while (str[++i])
		if (!ft_sep(str[i]) && ft_sep(str[i + 1]))
			size++;
	return (size);
}

void	ft_word(char *dest, char *src)
{
	int	i;

	i = -1;
	while (!ft_sep(src[++i]))
		dest[i] = src[i];
	dest[i] = '\0';
}

void	ft_put_split(char **res, char *str)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (ft_sep(str[i]))
			i++;
		else
		{
			j = 0;
			while (!ft_sep(str[i + j]))
				j++;
			res[w] = (char *) malloc(j + 1);
			ft_word(res[w], str + i);
			i += j;
			w++;
		}
	}
}

char	**ft_split(char *str)
{
	int	size;
	char	**res;

	size = ft_size(str);
	res = (char **) malloc(sizeof(char *) * (size + 1));
	res[size] = 0;
	ft_put_split(res, str);
	return (res);
}
