#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	*str = "-21474 89";

	printf("%i\n", ft_atoi(str));
	return (0);
}
