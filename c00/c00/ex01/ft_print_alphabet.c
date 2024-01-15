/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:04:33 by yilim             #+#    #+#             */
/*   Updated: 2024/01/11 13:38:25 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii_a;
	int	ascii_z;

	ascii_a = 97;
	ascii_z = 122;
	while (ascii_a <= ascii_z)
	{
		write(1, &ascii_a, 1);
		ascii_a++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
