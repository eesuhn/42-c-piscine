/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:32:24 by yilim             #+#    #+#             */
/*   Updated: 2024/01/19 11:13:10 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;

	if (argc != 3)
	{
		return (0);
	}
	str1 = argv[1];
	str2 = argv[2];
	printf("%i\n", ft_strcmp(str1, str2));
	return (0);
}
