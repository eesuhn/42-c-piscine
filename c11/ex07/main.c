/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:58:43 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 18:01:47 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp) (char *, char *));

void	ft_putarr(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		printf("%s\n", tab[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
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
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	ft_putarr(tab);
	return (0);
}
