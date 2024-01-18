/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:40:32 by yilim             #+#    #+#             */
/*   Updated: 2024/01/18 18:44:24 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(int argc, char *argv[])
{
	char	dest[5];
	char	*src;
	size_t	copied;

	if (argc != 2)
		return (0);
	src = argv[1];
	copied = strlcpy(dest, src, sizeof(dest));
	printf("Source: %s\n", src);
	printf("Size: %lu\n", sizeof(dest));
	printf("Copied string: %s\n", dest);
	printf("strlcpy: %zu\n", copied);
	copied = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source: %s\n", src);
	printf("Size: %lu\n", sizeof(dest));
	printf("Copied string: %s\n", dest);
	printf("strlcpy: %zu\n", copied);
	return (0);
}
