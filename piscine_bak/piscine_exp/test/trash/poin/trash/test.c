/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 20:35:46 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 21:37:31 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		i *= nb * nb;
		power--;
	}
	return (i);
}

int main(void)
{
	printf("%d\n", ft_iterative_power(4, 2));
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(10, 2));
		return (0);
}
