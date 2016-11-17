/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 14:14:38 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/30 21:18:57 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		rush(int x, int y)
{
	int i, j;

	space = 1;
	i = 1;
	k = 0;
	count = 0;
	count1 = 0;
	if (x <= rows - i)
	{
		ft_putchar('g');
		++space;
		++count;
	}
	while (k != 2 * i - 1)
	{
		if (count <= rows - 1)
		{
			;
			ft_putchar('h');
			++count;
		}
		else
		{
			++count1;
			(r = i + k - 2 * count1);
		}
		++k;
	}
	count1 = count = k = 0;
	return (0);
}
