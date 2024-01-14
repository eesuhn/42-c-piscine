/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:24:12 by yilim             #+#    #+#             */
/*   Updated: 2024/01/13 11:25:23 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int n)
{
	char	ascii;

	ascii = '0' + n;
	write(1, &ascii, 1);
}

int	ft_helper(char c, int i)
{
	char	temp;

	temp = 0;
	if (i == 0)
	{
		temp = c / 10;
	}
	else
	{
		temp = c % 10;
	}
	return (temp);
}

void	ft_print_comb2(void)
{
	int	val1;
	int	val2;

	val1 = 0;
	while (val1 <= 98)
	{
		val2 = val1 + 1;
		while (val2 <= 99)
		{
			ft_print_int(ft_helper(val1, 0));
			ft_print_int(ft_helper(val1, 1));
			write(1, " ", 1);
			ft_print_int(ft_helper(val2, 0));
			ft_print_int(ft_helper(val2, 1));
			if (!(val1 == 98 && val2 == 99))
			{
				write(1, ", ", 2);
			}
			val2++;
		}
		val1++;
	}
}
