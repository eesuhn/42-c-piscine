/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:54:13 by yilim             #+#    #+#             */
/*   Updated: 2024/01/27 19:20:21 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = -1;
	while (*(dest + d))
		d++;
	while (*(src + ++s))
	{
		*(dest + d) = *(src + s);
		d++;
	}
	*(dest + d) = '\0';
}

int	ft_totallen(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (++i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1 && *sep)
			len += ft_strlen(sep);
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*join;
	int		i;

	if (!size || !strs)
	{
		join = (char *) malloc(1);
		join[0] = '\0';
		return (join);
	}
	len = ft_totallen(size, strs, sep);
	join = (char *) malloc(len + 1);
	i = 0;
	ft_strcat(join, strs[i]);
	while (++i < size)
	{
		ft_strcat(join, sep);
		ft_strcat(join, strs[i]);
	}
	return (join);
}
