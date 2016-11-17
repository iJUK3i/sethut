/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newv3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 21:04:59 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/01 01:26:53 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str???
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	main()
{
	char str[] = "    33347331";
	int val = ft_atoi(str);

	printf("%d ", val);
	return (1);
}
