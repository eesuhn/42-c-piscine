/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:17:37 by yilim             #+#    #+#             */
/*   Updated: 2024/01/24 21:11:55 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*str;
	char	*base;

	str = "-b71";
	base = "0123456789ab";
	printf("%i\n", ft_atoi_base(str, base));
	return (0);
}
