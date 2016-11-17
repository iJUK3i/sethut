/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiforreal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 02:59:33 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/01 05:50:38 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0') 
	//pick up here need to fix if space or \n etc...
	{
		if (str[0] == '\n' || str[0] == '\v' || str[0] == '\r' ||
		    str[0] == '\f' || str[0] == )
		if (str[0] == '-')
		{
			sign = -1;
			i++;//get to the point, no bs
			if (str[i] == ' ' || (str[i] == '\t'))
			{
				return (0);
			}
			if (str[i] <= 9 && str[i] >= 1)
			{
				res = res * 10 + str[i] - '0';
				i++;
			}
			if (str[i] 
// should be ending
	}
	while (str[i] != '\0')
	{
	return (0);
}
