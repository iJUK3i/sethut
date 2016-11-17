/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 04:41:17 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 07:36:03 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		power(int base, int power)
{
	while (--power > 0)
		base *= 10;
	return (base);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] && (str[len] == '+' || str[len] == '-' || (str[len] >= '0' && str[len] <= '9')))
		len++;
	return (len);
}

int		ft_atoi(char *str)
{
	int len;
	int value;
	int i;

	i = 1;
	value = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	len = ft_strlen(str);
	while (len > 0)
	{
		len--;
		if (len == 0 && (str[len] == '-' || str[len] == '+'))
			value *= str[len] == '+' ? 1 : -1;
		else if (str[len] < '0' || str[len] > '9')
		{
			value = 0;
			i = 1;
		}
		else
			value += power(str[len] - '0', i++);
	}
	return (value);
}
