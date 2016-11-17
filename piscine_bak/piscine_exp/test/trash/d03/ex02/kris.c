/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:12:56 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 15:04:13 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *pbj, int *cola)
{
	int tmp;

	tmp = *pbj;
	*pbj = *cola;
	*cola = tmp;
}

int		main(void)
{
	int alex;
	int benny;
	char zebra;

	alex = 12345;
	benny = 56789;
	printf("%d %d\n", alex, benny);

	ft_swap(&alex, &benny);

	printf("\n%d %d", alex, benny);

}
