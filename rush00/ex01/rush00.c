/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwaziri <mwairi@student.42kl.edu.my>                     +#+  +:++#+ */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:10:37 by mwaziri           #+#    #+#             */
/*   Updated: 2024/01/14 16:01:09 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(int x, char symbol1, char symbol2)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
		{
			ft_putchar(symbol1);
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
		if (height == 1 || height == y)
		{
			print_line(x, 'o', '-');
		}
		else
		{
			print_line(x, '|', ' ');
		}
		ft_putchar('\n');
		height++;
	}
}
