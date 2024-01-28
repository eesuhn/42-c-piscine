/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:27:24 by yilim             #+#    #+#             */
/*   Updated: 2024/01/27 22:28:33 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_itoa_base(int nbr, char *base);

int	main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*res;
	int		r;

	nbr = "  --+-enpvabcen";
	base_from = "poneyvif";
	base_to = "0123456789ABCDEF";
	res = ft_convert_base(nbr, base_from, base_to);
	if (*res)
	{
		r = -1;
		while (*(res + ++r))
			write(1, (res + r), 1);
		free(res);
	}
	return (0);
}

/*
int	main(void)
{
	int		nbr;
	char	*base;
	char	*res;

	nbr = -42;
	base = "0123456789abcdef";
	res = ft_itoa_base(nbr, base);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/
