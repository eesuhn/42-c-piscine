#include <stdlib.h>
#include <stdio.h>

int	ft_numlen(int nbr)
{
	int	len = 0;

	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
}

char	*ft_itoa(int nbr)
{
	int	len;
	char	*res;

	if (nbr == -2147483648)
	{
		res = (char *) malloc(12);
		ft_strcpy(res, "-2147483648");
		return (res);
	}
	if (nbr == 0)
	{
		res = (char *) malloc(2);
		ft_strcpy(res, "0");
		return (res);
	}
	len = ft_numlen(nbr);
	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		res[--len] = (char)(nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}
