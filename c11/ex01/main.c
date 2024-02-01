/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:43:27 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 12:51:57 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int	*ft_map(int *tab, int length, int (*f) (int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
	}
	ft_putchar(nbr + '0');
}

void	ft_putarr(int *arr, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		ft_putnbr(arr[i]);
		write(1, "\n", 1);
	}
}

int	ft_add(int a)
{
	return (a + 1000);
}

int	main(void)
{
	int	tab[3];
	int	i;
	int	*res;

	i = -1;
	while (++i < 3)
		tab[i] = i + 100;
	res = ft_map(tab, 3, &ft_add);
	ft_putarr(res, 3);
	return (0);
}
