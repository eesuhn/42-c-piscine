/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:45:15 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 17:53:55 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_string_tab(char **tab);

void	ft_putarr(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		printf("%s\n", tab[i]);
}

int	main(void)
{
	char	**tab;

	tab = (char **) malloc(sizeof(char *) * 5);
	tab[0] = "ab";
	tab[1] = "ef";
	tab[2] = "cd";
	tab[3] = "bb";
	tab[4] = NULL;
	ft_sort_string_tab(tab);
	ft_putarr(tab);
	return (0);
}
