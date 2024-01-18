/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:35:01 by yilim             #+#    #+#             */
/*   Updated: 2024/01/18 15:17:17 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];

	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			ft_putchar(*str);
		else
		{
			hex[0] = (*str >> 4);
			hex[0] += (hex[0] < 10) * '0' + (hex[0] >= 10) * ('a' - 10);
			hex[1] = (*str & 0x0F);
			hex[1] += (hex[1] < 10) * '0' + (hex[1] >= 10) * ('a' - 10);
			ft_putchar('\\');
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
		}
		str++;
	}
}
