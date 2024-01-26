/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:16:06 by yilim             #+#    #+#             */
/*   Updated: 2024/01/26 12:32:24 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

void	ft_putarr(int *arr, int size)
{
	int		i;
	char	c;

	i = -1;
	while (++i < size)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
	}
}

int	main(void)
{
	int	*res;
	int	size;
	int	min;
	int	max;

	min = 2;
	max = 6;
	size = ft_ultimate_range(&res, min, max);
	if (size == -1)
		printf("Memory not allocated");
	else if (size == 0)
		printf("Result is NULL");
	else
	{
		ft_putarr(res, (max - min));
		printf("\nSize: %i\n", size);
		free(res);
	}
	return (0);
}
