/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:32:55 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 20:17:15 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *num;
	int i;

	if (min >= max)
	{
		*range = (void *)0;
		return (NULL);
	}
	num = (int*)malloc(sizeof(*num) * (max - min));
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	*range = num;
	return (i);
}
