/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:31:23 by yilim             #+#    #+#             */
/*   Updated: 2024/01/29 15:11:55 by yilim            ###   ########.fr       */
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
	char	**split;

	join = "hi12hi1hi2"; // Size = 3
	charset = "123";
	// printf("%i\n", ft_size(join, charset));
	split = ft_split(join, charset);
	// ft_putarr(split);
	return (0);
}
