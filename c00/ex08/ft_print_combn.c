/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:59:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/16 12:29:28 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combn(int n, int cur, int combn[], int depth)
{
	int	i;

	if (depth == n)
	{
		// Print array of numbers
		i = 0;
		while (i < n)
		{
			ft_putchar(combn[i] + '0');
			i++;
		}
		// No printing of comma if the index 0 reach its maximum
		if (combn[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	while (cur < 10)
	{
		// Assign digit to ascending index of numbers array
		combn[depth] = cur;
		cur++;
		ft_combn(n, cur, combn, depth + 1);
	}
}

void	ft_print_combn(int n)
{
	int	num_arr[9];

	if (n <= 0 || n >= 10)
		return ;
	ft_combn(n, 0, num_arr, 0);
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
