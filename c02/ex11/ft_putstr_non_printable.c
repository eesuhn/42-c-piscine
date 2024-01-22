/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:35:01 by yilim             #+#    #+#             */
/*   Updated: 2024/01/22 13:26:52 by yilim            ###   ########.fr       */
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
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= ' ' && *ptr <= '~')
			ft_putchar(*ptr);
		else
		{
			hex[0] = (*ptr >> 4) & 0x0F;
			hex[0] += (hex[0] < 10) * '0' + (hex[0] >= 10) * ('a' - 10);
			hex[1] = (*ptr & 0x0F);
			hex[1] += (hex[1] < 10) * '0' + (hex[1] >= 10) * ('a' - 10);
			ft_putchar('\\');
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
		}
		ptr++;
	}
}
