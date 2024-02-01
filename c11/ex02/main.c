/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:45:50 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 14:19:06 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f) (char *));

int	ft_is_alpha(char *str)
{
	int		i;
	char	c;

	i = -1;
	while (str[++i])
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (0);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dup;

	size = ft_strlen(src);
	dup = (char *) malloc(size + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

int	main(void)
{
	char	**tab;
	int		size;

	size = 3;
	tab = (char **) malloc(sizeof(char *) * (size + 1));
	tab[size] = 0;
	tab[0] = ft_strdup("hello");
	tab[1] = ft_strdup("abc");
	tab[2] = ft_strdup("hi");
	printf("%i\n", ft_any(tab, &ft_is_alpha));
	return (0);
}
