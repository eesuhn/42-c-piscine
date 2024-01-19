/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:27:42 by yilim             #+#    #+#             */
/*   Updated: 2024/01/19 11:59:40 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	s1 = "ab\0c";
	s2 = "abc";
	n = 5;
	printf("%i\n", ft_strncmp(s1, s2, n));
	return (0);
}
