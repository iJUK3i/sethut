/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:41:25 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/04 15:34:55 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_takes_place(int hour);

void	ft_takes_place(int hour)
{
	int x;
	int y;
	int a;
	int b;

	while (hour <= 23 && 0 <= hour)
	{
		x = hour;
		y = hour + 1;
		if (x >= 12)
			x = x - 12;
		if (x > 0)
			a = 1;
		if (y >= 12)
			y = y - 12;
		if (y >= 0)
			b = 1;
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s. AND %d.00 %s.\n", x,
			(a == 0 ? "A.M." : "P.M."), y, (b == 0 ? "A.M." : "P.M."));
}
