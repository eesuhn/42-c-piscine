/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42KL.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:16:16 by yilim             #+#    #+#             */
/*   Updated: 2024/02/01 17:25:44 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		add(int n1, int n2);
int		sub(int n1, int n2);
int		mul(int n1, int n2);
int		div(int n1, int n2);
int		mod(int n1, int n2);
int		ft_get_o(char *op);
int		ft_valid(char *n1, int o, char *n2, int *num);
void	do_op(char *n1, char *op, char *n2);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
