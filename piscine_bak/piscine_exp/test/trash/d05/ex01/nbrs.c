/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 06:05:41 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 06:27:30 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int	flipper(char c, int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		ft_putchar(c);
		i++;
	}
	return (0);
}

int	main()
{
	flipper('@', 27);
	ft_putchar('\n');
	ft_putchar('K');
	return (0);
}
