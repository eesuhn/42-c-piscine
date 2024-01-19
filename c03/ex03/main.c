/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:55:34 by yilim             #+#    #+#             */
/*   Updated: 2024/01/19 12:59:44 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[12];
	char	*src;
	int		nb;

	strcpy(dest, "hello");
	src = " world";
	nb = 3;
	printf("%s\n", strncat(dest, src, nb));
	return (0);
}
