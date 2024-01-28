/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:31:23 by yilim             #+#    #+#             */
/*   Updated: 2024/01/28 22:50:43 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int	ft_size(char *str, char *charset);

void	ft_putarr(char	**arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		printf("%s\n", arr[i]);
}

int	main(void)
{
	char	*join;
	char	*charset;
	char	*split[] = {"hello", "hi", 0, ""};

	join = "hi0,  ,,   hi, hi,hi,     hihi,,hi";
	charset = ", 0";
	// split = ft_split(join, charset);
	// ft_putarr(split);
	printf("%i\n", ft_size(join, charset));
	return (0);
}
