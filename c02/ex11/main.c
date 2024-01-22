/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:55:33 by yilim             #+#    #+#             */
/*   Updated: 2024/01/22 13:23:43 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str;

	str = "Hello\n\t\x1B\xA2\xA2World";
	printf("%s\n", str);
	ft_putstr_non_printable(str);
	return (0);
}
