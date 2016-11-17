/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brandnewft_atoi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:21:57 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/01 16:48:49 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '-') && (str[i + 1] <= 9 && str[i + 1] >= 0))
	{
		sign = -1;
		res = res * 10 + str[i] - '0';
		i++;
	}
	else if ((str[i] == '+') && (str[i + 1] <= 9 && str[i + 1] >= 0))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	else if (str[i] == '\0')
		return (sign * res);
}
