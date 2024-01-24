/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:07:31 by yilim             #+#    #+#             */
/*   Updated: 2024/01/24 17:55:51 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (*(base + i) == *(base + j))
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

void	ft_base(long nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	tmp;

	tmp = (long)nbr;
	if (!base || !ft_valid(base))
		return ;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
	}
	ft_base(tmp, base);
}
