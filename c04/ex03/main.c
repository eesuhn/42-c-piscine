/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:36:31 by yilim             #+#    #+#             */
/*   Updated: 2024/01/23 22:15:12 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*nbr;

	nbr = " \f\n\r\t\v---+--+abc1234ab567--";
	printf("%i\n", ft_atoi(nbr));
	return (0);
}
