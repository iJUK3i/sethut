/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:05:03 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 20:57:48 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_range(int min, int max)
{
	int *num;
	int i;

	if (min >= max)
		return (NULL);
	num = (int*)malloc(sizeof(*num) * (max - min));
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (i);
}
