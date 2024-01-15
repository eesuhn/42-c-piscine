/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:59:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/15 19:49:21 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combn(int n, int cur, int combn[], int depth)
{
	int	i;

	if (depth == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(combn[i] + '0');
			i++;
		}
		if (combn[0] != 10 - n)
		{
			write(1, ", ", 2);
		}
		return ;
	}
	while (cur < 10)
	{
		combn[depth] = cur;
		ft_combn(n, cur + 1, combn, depth + 1);
		cur++;
	}
}

void	ft_print_combn(int n)
{
	int	num_arr[9];

	ft_combn(n, 0, num_arr, 0);
}

/*
int	main(void)
{
	ft_print_combn(4);
	return (0);
}
*/
