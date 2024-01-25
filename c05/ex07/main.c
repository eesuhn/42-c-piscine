/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:02:16 by yilim             #+#    #+#             */
/*   Updated: 2024/01/25 21:03:47 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 2147483646;
	printf("%i\n", ft_find_next_prime(nb));
	return (0);
}
