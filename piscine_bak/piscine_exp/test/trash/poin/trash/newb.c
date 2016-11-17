/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:11:52 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 18:20:44 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int i;

	i = 1;
	if ((nb <= 1) || (nb > 12))
		return (0);
	if ((nb >= 2) || (nb <= 12))
		while (i <= nb)
		{
			nb = nb * (nb - i);
			i++;
		}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-7));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(9));
	printf("%d\n", ft_recursive_factorial(12));
	return (0);
}
