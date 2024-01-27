/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:26:28 by yilim             #+#    #+#             */
/*   Updated: 2024/01/27 22:29:27 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_valid(char *base);
int	ft_strlen(char *str);

void	ft_base(long nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_base(nbr / base_len, base);
	// write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	tmp;

	tmp = (long)nbr;
	if (!base || !ft_valid(base))
		return ;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
	}
	ft_base(tmp, base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
}
