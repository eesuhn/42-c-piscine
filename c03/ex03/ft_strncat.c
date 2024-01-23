/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:55:27 by yilim             #+#    #+#             */
/*   Updated: 2024/01/23 17:57:36 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (*(dest + d))
		d++;
	while (s < nb && *(src + s))
	{
		*(dest + d) = *(src + s);
		d++;
		s++;
	}
	*(dest + d) = '\0';
	return (dest);
}
