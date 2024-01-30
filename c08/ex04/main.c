/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:00:25 by yilim             #+#    #+#             */
/*   Updated: 2024/01/30 17:53:45 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char	*strs[3];
	int		size;

	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "Hi";
	size = 3;
	ft_strs_to_tab(size, strs);
	return (0);
}
