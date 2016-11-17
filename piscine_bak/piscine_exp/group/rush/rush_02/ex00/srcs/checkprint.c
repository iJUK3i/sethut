/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dliang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:43:06 by dliang            #+#    #+#             */
/*   Updated: 2016/11/13 16:59:09 by dliang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_invalid(int x, int y)
{
	if ((x == 0) || (y == 0))
	{
		ft_putstr("NOT A RUSH\n");
		return (1);
	}
	return (0);
}

void	check_rush(char *input, int x, int y)
{
	int multi;

	multi = 0;
	if (!ft_strcmp(input, rush00(x, y)))
		print_rush(0, x, y, multi++);
	if (!ft_strcmp(input, rush01(x, y)))
		print_rush(1, x, y, multi++);
	if (!ft_strcmp(input, rush02(x, y)))
		print_rush(2, x, y, multi++);
	if (!ft_strcmp(input, rush03(x, y)))
		print_rush(3, x, y, multi++);
	if (!ft_strcmp(input, rush04(x, y)))
		print_rush(4, x, y, multi++);
	if (multi == 0)
		ft_putstr("NOT A RUSH!");
	ft_putstr("\n");
}

void	print_rush(int rushnb, int x, int y, int multi)
{
	if (multi > 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(rushnb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}
