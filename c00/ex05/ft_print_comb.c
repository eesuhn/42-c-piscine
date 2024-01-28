/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:08:49 by yilim             #+#    #+#             */
/*   Updated: 2024/01/15 19:38:13 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int n)
{
	char	ascii;

	ascii = '0' + n;
	write(1, &ascii, 1);
}

void	ft_print_nums(int val1, int val2, int val3)
{
	ft_print_int(val1);
	ft_print_int(val2);
	ft_print_int(val3);
}

void	ft_print_comb(void)
{
	int	val1;
	int	val2;
	int	val3;

	val1 = 0;
	while (val1 <= 7)
	{
		val2 = val1 + 1;
		while (val2 <= 8)
		{
			val3 = val2 + 1;
			while (val3 <= 9)
			{
				ft_print_nums(val1, val2, val3);
				if (!(val1 == 7 && val2 == 8 && val3 == 9))
				{
					write(1, ", ", 2);
				}
				val3++;
			}
			val2++;
		}
		val1++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
