/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 06:15:26 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 06:18:34 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(long nb)
{
	if (nb < 0 && nb * -1 != nb)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb % 10 != nb)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 > 0 ? nb % 10 + '0' : nb % 10 * (-1) + '0');
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
