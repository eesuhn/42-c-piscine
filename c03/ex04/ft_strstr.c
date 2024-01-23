/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:04 by yilim             #+#    #+#             */
/*   Updated: 2024/01/23 17:58:30 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	i;
	int	flag;

	s = 0;
	if (!(*to_find))
		return (str);
	while (*(str + s))
	{
		if (*(str + s) == *to_find)
		{
			i = 0;
			flag = 0;
			while (to_find[i])
			{
				if (*(str + s + i) != to_find[i])
					flag = 1;
				i++;
			}
			if (flag == 0)
				return (str + s);
		}
		s++;
	}
	return (0);
}
