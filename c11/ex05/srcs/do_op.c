/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:21:23 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 17:29:11 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_get_o(char *op)
{
	int		i;
	char	*op_l;

	op_l = "+-*/%";
	i = -1;
	while (op_l[++i])
		if (op[0] == op_l[i] && op[1] == '\0')
			return (i);
	return (-1);
}

int	ft_valid(char *n1, int o, char *n2, int *num)
{
	num[0] = ft_atoi(n1);
	num[1] = ft_atoi(n2);
	if (num[1] == 0 && (o == 3 || o == 4))
	{
		if (o == 3)
			ft_putstr("Stop : division by zero");
		else
			ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (1);
}

void	do_op(char *n1, char *op, char *n2)
{
	int	(*op_c[5])(int, int);
	int	o;
	int	num[2];

	op_c[0] = add;
	op_c[1] = sub;
	op_c[2] = mul;
	op_c[3] = div;
	op_c[4] = mod;
	o = ft_get_o(op);
	if (o != -1)
	{
		if (ft_valid(n1, o, n2, num) != 0)
			ft_putnbr(op_c[o](num[0], num[1]));
		ft_putchar('\n');
	}
	else
		write(1, "0\n", 2);
}
