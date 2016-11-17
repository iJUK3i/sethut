/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iknowthis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 22:48:17 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 22:56:27 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	res = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	main(void)
{
	int val = ft_atoi(str);
	char str[] = "-1223";

	printf("%d\n", val);
	return (0);
}
