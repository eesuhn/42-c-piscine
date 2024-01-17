/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:38:19 by yilim             #+#    #+#             */
/*   Updated: 2024/01/18 01:29:08 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		flag;

	ptr = str;
	flag = 1;
	while (*str)
	{
		if (ft_is_alpha(*str) || ft_is_numeric(*str))
		{
			if (flag)
			{
				if (*str >= 'a' && *str <= 'z')
					*str -= ('a' - 'A');
				flag = 0;
			}
			else
				if (*str >= 'A' && *str <= 'Z')
					*str += ('a' - 'A');
		}
		else
			flag = 1;
		str++;
	}
	return (ptr);
}
