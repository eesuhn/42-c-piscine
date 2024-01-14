/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwaziri <mwaziri@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:25:28 by mwaziri           #+#    #+#             */
/*   Updated: 2024/01/14 16:09:15 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(int x, char symbol1, char symbol2, char symbol3)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width <= 1)
		{
			ft_putchar(symbol1);
		}
		else if (width == x)
		{
			ft_putchar(symbol3);
		}
		else
		{
			ft_putchar(symbol2);
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	height;

	height = 1;
	while (height <= y)
	{
		if (height == 1)
		{
			print_line(x, '/', '*', '\\');
		}
		else if (height == y)
		{
			print_line(x, '\\', '*', '/');
		}
		else
		{
			print_line(x, '*', ' ', '*');
		}
		ft_putchar('\n');
		height++;
	}
}
