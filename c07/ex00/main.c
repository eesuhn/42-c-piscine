/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:12:10 by yilim             #+#    #+#             */
/*   Updated: 2024/01/26 11:31:53 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*dup;

	str = "hello";
	dup = ft_strdup(str);
	printf("%s\n", dup);
	free(dup);
	return (0);
}
