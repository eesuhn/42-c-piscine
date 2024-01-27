/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:09:42 by yilim             #+#    #+#             */
/*   Updated: 2024/01/27 12:14:11 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	if (!argc)
		return (0);
	i = -1;
	str = argv[0];
	while (*(str + ++i))
		write(1, (str + i), 1);
	write(1, "\n", 1);
	return (0);
}
