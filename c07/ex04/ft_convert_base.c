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
#include <stdio.h>

int		ft_valid(char *base);
int		ft_strlen(char *str);
int		ft_numlen(int nbr, int negative);
int		ft_atoi_base(char *str, char *base);

char	*ft_base(long nbr, char *base, char *res)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		ft_base(nbr / base_len, base, res);
	res[ft_strlen(res)] = base[nbr % base_len];
	return (res);
}

char	*ft_itoa_base(int nbr, char *base)
{
	long	tmp;
	int		size;
	int		negative;
	char	*res;

	tmp = (long)nbr;
	if (!base || !ft_valid(base))
		return (NULL);
	negative = 0;
	if (tmp < 0)
	{
		tmp *= -1;
		negative = 1;
	}
	size = ft_numlen(tmp, negative);
	res = (char *) malloc(size + 1);
	if (negative)
		res[0] = '-';
	res[size] = '\0';
	return (ft_base(tmp, base, res));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp;
	char	*res;

	temp = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(temp, base_to);
	printf("%s\n", res);
	return (0);
}
