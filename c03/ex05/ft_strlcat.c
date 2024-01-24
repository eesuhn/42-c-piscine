/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:18:12 by yilim             #+#    #+#             */
/*   Updated: 2024/01/24 21:28:12 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	i = 0;
	dest_len = 0;
	while (*dest && dest_len < size)
	{
		dest++;
		dest_len++;
	}
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	while (i < (size - dest_len - 1) && src[i])
	{
		*dest = src[i];
		dest++;
		i++;
	}
	if (dest_len <= size && size != 0)
		*dest = '\0';
	return (dest_len + ft_strlen(src));
}
