/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:27:38 by yilim             #+#    #+#             */
/*   Updated: 2024/01/13 13:57:26 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int n)
{
	char	ascii;

	ascii = '0' + n;
	write(1, &ascii, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		num %= 10;
	}
	ft_print_int(num);
}
