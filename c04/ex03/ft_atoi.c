/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:35:20 by yilim             #+#    #+#             */
/*   Updated: 2024/01/23 22:14:54 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	int	flag;

	flag = 0;
	if (c == ' ' || c == '\f' || c == '\n')
		flag = 1;
	if (c == '\r' || c == '\t' || c == '\v')
		flag = 1;
	return (flag);
}

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	val;
	int	negative;

	i = 0;
	while (ft_isspace(*(str + i)))
		i++;
	val = 0;
	negative = 0;
	while (*(str + i))
	{
		if (*(str + i) == '-' || *(str + i) == '+')
		{
			if (*(str + i) == '-')
				negative++;
		}
		else if (ft_is_numeric(*(str + i)))
			val = val * 10 + (*(str + i) - '0');
		else
			break ;
		i++;
	}
	if (negative % 2 != 0)
		val *= -1;
	return (val);
}
