/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:05:09 by yilim             #+#    #+#             */
/*   Updated: 2024/01/18 12:30:16 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - str);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				size_src;
	unsigned int	i;

	size_src = ft_strlen(src);
	i = 0;
	if (!(*src))
		return (size_src);
	while (i < (size - 1))
	{
		*dest = *src;
		src++;
		dest++;
		i++;
		if (*src)
			*dest = '\0';
	}
	return (size_src);
}

/*
int	main(int argc, char *argv[])
{
	char	dest[5];
	char	*src = argv[1];
	size_t	copied;

	
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
*/
