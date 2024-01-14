/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:05:57 by yilim             #+#    #+#             */
/*   Updated: 2024/01/14 17:38:53 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	char	*x;
	char	*y;
	int		val1;
	int		val2;

	if (argc < 3)
	{
		return (0);
	}
	x = argv[1];
	y = argv[2];
	val1 = ft_atoi(x);
	val2 = ft_atoi(y);
	rush(val1, val2);
	return (0);
}
