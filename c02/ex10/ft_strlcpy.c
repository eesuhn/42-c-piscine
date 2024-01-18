/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:05:09 by yilim             #+#    #+#             */
/*   Updated: 2024/01/18 18:47:14 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	}
	*dest = '\0';
	return (size_src);
}
