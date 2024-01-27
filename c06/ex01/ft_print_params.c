/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:31:06 by yilim             #+#    #+#             */
/*   Updated: 2024/01/27 14:43:52 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		v;
	int		c;
	char	*arg;

	if (argc < 2)
		return (0);
	v = 0;
	while (++v < argc)
	{
		c = -1;
		arg = argv[v];
		while (*(arg + ++c))
			write(1, (arg + c), 1);
		write(1, "\n", 1);
	}
	return (0);
}
