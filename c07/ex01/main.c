/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:37:04 by yilim             #+#    #+#             */
/*   Updated: 2024/01/28 17:49:28 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int	*ft_range(int min, int max);

void	ft_putarr(int *arr, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		printf("%i\n", arr[i]);
}

int	main(void)
{
	int	min;
	int	max;
	int	*arr;

	min = -2;
	max = 3;
	arr = ft_range(min, max);
	ft_putarr(arr, (max - min));
	free(arr);
	return (0);
}
