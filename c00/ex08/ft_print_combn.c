/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:59:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/15 18:06:19 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_set_max_num_arr(int max_num_arr[], int n)
{
	int	start;
	int	i;

	start = 10 - n;
	i = 0;
	while (i <= n)
	{
		max_num_arr[i] = start;
		start++;
		i++;
	}
}

void	ft_helper(int *ptr)
{
	*ptr -= 1;
}

void	ft_print_combn(int n)
{
	int	max_num_arr[9];
	int	*ptr;

	ft_set_max_num_arr(max_num_arr, n);
	ptr = &n;
	while (n > 0)
	{
		ft_helper(ptr);
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
