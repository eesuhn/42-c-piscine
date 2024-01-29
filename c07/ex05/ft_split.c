/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:28:39 by yilim             #+#    #+#             */
/*   Updated: 2024/01/29 15:10:23 by yilim            ###   ########.fr       */
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

/*
 * @param int dir 
 * 1 - Separator, next no separator
 * 0 - No separator, next separator
 *
 * @return int Returns 1 if true, 0 otherwise
 */
int	ft_sep(int dir, char *str, char *charset, int i)
{
	if (dir)
		if (ft_charset(*(str + i), charset))
			if (!ft_charset(*(str + i + 1), charset))
				return (1);
	if (!dir)
		if (!ft_charset(*(str + i), charset))
			if (ft_charset(*(str + i + 1), charset))
				return (1);
	return (0);
}

/*
 * @return int Returns total elements + 1
 */
int	ft_size(char *str, char *charset)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (*(str + ++i))
		// if (ft_charset(*(str + i), charset))
			// if (!ft_charset(*(str + i + 1), charset))
		if (ft_sep(1, str, charset, i))
			c++;
	return (c);
}

char	**ft_split(char *str, char *charset)
{
	return (NULL);
}
