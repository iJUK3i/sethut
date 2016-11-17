/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:47:20 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 21:09:23 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_nbr_lines(char *str)
{
	int i;
	int j;
	int flag;

	flag = 1;
	j = 0;
	i = 0;
	str[ft_line_len(str) - 3] = '\0';
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		flag = -1;
		i++;
	}
	else if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	return (flag * j);
}
