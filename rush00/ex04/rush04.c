/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:09:17 by yilim             #+#    #+#             */
/*   Updated: 2024/01/13 18:10:05 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_x(int width, char sym1, char sym2, char sym3)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(sym1);
		}
		else if (i == width - 1)
		{
			ft_putchar(sym3);
		}
		else
		{
			ft_putchar(sym2);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			ft_print_x(x, 'A', 'B', 'C');
		}
		else if (i == y - 1)
		{
			ft_print_x(x, 'C', 'B', 'A');
		}
		else
		{
			ft_print_x(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		i++;
	}
}
