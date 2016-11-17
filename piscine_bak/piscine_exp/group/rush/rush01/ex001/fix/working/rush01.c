/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 12:27:14 by khanson           #+#    #+#             */
/*   Updated: 2016/11/12 17:34:44 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int cc;
	int cr;

	cc = 0;
	cr = 0;
	if (x > 0 && y > 0)
	{
		while (cr < y)
		{
			while (cc < x)
			{
				if (cr == 0 && cc == 0)
				{
					ft_putchar('/');
				}
				else if ((cr == 0 && cc == x - 1) || (cr == y - 1 && cc == 0))
				{
					ft_putchar('\\');
				}
				else if (cr == y - 1 && cc == x - 1)
				{
					ft_putchar('/');
				}
				else if (((cr == 0) || (cr == y - 1)) || ((cc == 0) || (cc == x - 1)))
				{
					ft_putchar('*');
				}
				else
				{
					ft_putchar(' ');
				}
				cc++;
			}
			ft_putchar('\n');
			cc = 0;
			cr++;
		}
	}
}
