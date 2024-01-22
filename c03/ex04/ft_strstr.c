/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:04 by yilim             #+#    #+#             */
/*   Updated: 2024/01/19 13:24:20 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		flag;
	char	*find;

	find = to_find;
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			flag = 0;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					flag = 1;
				i++;
			}
			if (flag == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
