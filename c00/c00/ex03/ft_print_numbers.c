/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:31:52 by yilim             #+#    #+#             */
/*   Updated: 2024/01/11 22:12:56 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ascii_0;
	char	ascii_9;

	ascii_0 = '0';
	ascii_9 = '9';
	while (ascii_0 <= ascii_9)
	{
		write(1, &ascii_0, 1);
		ascii_0++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
