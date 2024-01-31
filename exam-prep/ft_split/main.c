#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**ft_split(char *str);

void	ft_putstr_arr(char **strs)
{
	int	i;
	int	j;

	i = -1;
	while (strs[++i])
	{
		j = -1;
		while (strs[i][++j])
			write(1, &(strs[i][j]), 1);
		write(1, "\n", 1);
	}
}

int	main(void)
{
	char	**strs;
	char	*str;

	str = "hello      hehehe    world hi";
	strs = ft_split(str);
	ft_putstr_arr(strs);
	return (0);
}
