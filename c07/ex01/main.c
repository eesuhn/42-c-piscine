/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:37:04 by yilim             #+#    #+#             */
/*   Updated: 2024/01/26 12:13:33 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

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
	int	min;
	int	max;
	int	*arr;

	min = 2;
	max = 6;
	arr = ft_range(min, max);
	ft_putarr(arr, (max - min));
	free(arr);
	return (0);
}
