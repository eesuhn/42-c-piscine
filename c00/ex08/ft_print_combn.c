/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:59:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/15 15:46:29 by yilim            ###   ########.fr       */
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
	start = 10 - n;
	i = 0;
	while (i <= n)
	{
		max_num_arr[i] = start;
		start++;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	max_num_arr[9];

	ft_set_max_num_arr(max_num_arr, n);
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
