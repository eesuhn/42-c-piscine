/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:08:28 by yilim             #+#    #+#             */
/*   Updated: 2024/01/24 18:05:24 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int		nbr;
	char	*base;

	nbr = -1669;
	base = "0123456789";
	printf("\nNbr: %i\n\n", nbr);
	printf("Base: %s\n", base);
	ft_putnbr_base(nbr, base);
	base = "01";
	printf("\n\nBase: %s\n", base);
	ft_putnbr_base(nbr, base);
	base = "0123456789ABCDEF";
	printf("\n\nBase: %s\n", base);
	ft_putnbr_base(nbr, base);
	base = "poneyvif";
	printf("\n\nBase: %s\n", base);
	ft_putnbr_base(nbr, base);
	write(1, "\n\n", 2);
	return (0);
}
