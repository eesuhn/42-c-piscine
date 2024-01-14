/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:59:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/13 22:24:50 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_set_max_num_arr(int max_num_arr[], int n)
{
	int	i;
	int	num_arr[10];
	int	start;

	i = 0;
	while (i < 10)
	{
		num_arr[i] = i;
		i++;
	}
	i = 0;
	start = 10 - n;
	while (i <= n)
	{
		max_num_arr[i] = start;
		start++;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num_arr[9];
	int	i;

	ft_set_max_num_arr(num_arr, n);
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
