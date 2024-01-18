/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:32:24 by yilim             #+#    #+#             */
/*   Updated: 2024/01/18 18:03:28 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;
	int		flag;

	if (argc != 3)
	{
		return (0);
	}
	str1 = argv[1];
	str2 = argv[2];
	flag = strcmp(str1, str2);
	printf("%i\n", flag);
	return (0);
}
