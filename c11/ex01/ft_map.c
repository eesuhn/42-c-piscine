/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:43:09 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 13:43:29 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	*arr;
	int	i;

	arr = (int *) malloc(sizeof(int) * length);
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}
