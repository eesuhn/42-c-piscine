/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:31 by yilim             #+#    #+#             */
/*   Updated: 2024/01/23 11:14:02 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*to_find;
	char	*test_str;
	char	*test_to_find;

	str = "h hell hello hell";
	to_find = "hello";
	printf("Debug: %s\n", ft_strstr(str, to_find));
	test_str = "h hell hello hell";
	test_to_find = "hello";
	printf("Expected: %s\n", strstr(test_str, test_to_find));
	return (0);
}
