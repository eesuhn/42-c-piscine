/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:34:08 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 14:48:58 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f) (int, int));

int	ft_cmp(int i1, int i2)
{
	return (i1 - i2);
}

int	main(void)
{
	int	tab[3];

	tab[0] = 3;
	tab[1] = 2;
	tab[2] = 1;
	printf("%i\n", ft_is_sort(tab, 3, &ft_cmp));
	return (0);
}
