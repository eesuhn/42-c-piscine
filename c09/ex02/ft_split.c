/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:28:39 by yilim             #+#    #+#             */
/*   Updated: 2024/01/29 19:16:04 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_size(char *str, char *charset)
{
	int	i;
	int	size;

	i = -1;
	size = 0;
	while (str[++i])
	{
		if (!ft_sep(str[i], charset) && ft_sep(str[i + 1], charset))
			size++;
	}
	return (size);
}

void	ft_word(char *dest, char *from, char *charset)
{
	int	i;

	i = -1;
	while (!ft_sep(from[++i], charset))
		dest[i] = from[i];
	dest[i] = '\0';
}

void	ft_put_split(char **res, char *str, char *charset)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (ft_sep(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!ft_sep(str[i + j], charset))
				j++;
			res[w] = (char *) malloc(j + 1);
			ft_word(res[w], str + i, charset);
			i += j;
			w++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		size;

	size = ft_size(str, charset);
	res = (char **) malloc(sizeof(char *) * (size + 1));
	res[size] = 0;
	ft_put_split(res, str, charset);
	return (res);
}
