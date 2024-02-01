/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:58:28 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 18:01:41 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp) (char *, char *))
{
	char	*temp;
	int		end;
	int		i;

	end = 0;
	while (end == 0)
	{
		end = 1;
		i = -1;
		while (tab[++i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				end = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}
