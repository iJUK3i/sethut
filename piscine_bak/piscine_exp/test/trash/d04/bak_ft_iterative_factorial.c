/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 12:05:15 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 13:24:56 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long int	multiplynumbers(int nb);

int	main(void)
{
	int nb;

	printf("Enter a positive integer: ");
	scanf("%d", &nb);
	printf("Factorial of %d = %ld", nb, multiplynumbers(nb));
	return (0);
}
long int	multiplynumbers(int nb)
{
	if (nb >= 1)
		return nb * multiplynumbers(nb - 1);
	else
		return (1);
}
