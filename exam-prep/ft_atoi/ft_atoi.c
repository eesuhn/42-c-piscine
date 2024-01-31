int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	negative;

	res = 0;
	i = 0;
	negative = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * negative);
}
