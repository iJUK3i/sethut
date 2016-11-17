/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:12:56 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 14:38:51 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	*a = 4;
	*b = 2;
}

int	main(void)
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = 2;
	b = 4;
	ptra = &a;
	ptrb = &b;
	printf("%d", a);
	printf("%d", b);
	ft_swap(ptra, ptrb);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
