#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int nbr);

int	main(void)
{
	int	nbr = 2345678;
	char	*res = ft_itoa(nbr);

	printf("%s\n", res);
	free(res);
	return (0);
}
