/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:18:12 by yilim             #+#    #+#             */
/*   Updated: 2024/01/23 17:18:39 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	char			*tmp;

	i = 0;
	dest_len = 0;
	tmp = dest;
	while (*dest)
	{
		dest++;
		dest_len++;
	}
	if (size < (dest_len + 1))
		return (ft_strlen(src) + size);
	while (i < (size - dest_len - 1))
	{
		*dest = src[i];
		dest++;
		i++;
	}
	if (*tmp)
		if (dest_len <= size && size != 0 && *(dest - 1) != '\0')
			*dest = '\0';
	return (dest_len + ft_strlen(src));
}
