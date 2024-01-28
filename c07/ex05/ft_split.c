/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:28:39 by yilim             #+#    #+#             */
/*   Updated: 2024/01/28 22:46:12 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
 * @return int Returns 1 if char found, 0 otherwise
 */
int	ft_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (*(charset + ++i))
		if (*(charset + i) == c)
			return (1);
	return (0);
}

int	ft_size(char *str, char *charset)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (*(str + ++i))
	{
		if (ft_charset(*(str + i), charset))
		{
			if (!ft_charset(*(str + i + 1), charset))
			{
				printf("%c\n", *(str + i + 1));
				printf("%i\n", ft_charset(*(str + i + 1), charset));
				c++;
			}
		}
	}
	return (c);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	size;

	i = 0;
}
