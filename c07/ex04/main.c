/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:27:24 by yilim             #+#    #+#             */
/*   Updated: 2024/01/29 19:13:18 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*res;

	nbr = "-42";
	base_from = "0123456789";
	base_to = "01";
	res = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", res);
	return (0);
}
