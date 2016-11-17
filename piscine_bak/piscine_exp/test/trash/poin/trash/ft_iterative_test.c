/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:11:52 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 16:21:54 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb int i int total)
{
	i = 1;
	solution = 1;
	if (nb <= 0 || nb > 12)
		return 0;
	if ((nb >= 2) || (nb <= 12))
		return (0);
	while (i <= nb)
	{
		total = nb * i;
		i++;
	}
	return (total);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-7));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}
