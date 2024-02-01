/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:21:49 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 11:41:45 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_foreach(int *tab, int length, void (*f) (int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	ft_putchar(nbr + '0');
}

int	main(void)
{
	int	nbr[10];
	int	i;

	i = -1;
	while (++i < 10)
		nbr[i] = i;
	ft_foreach(nbr, 10, &ft_putnbr);
	return (0);
}
