/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiforreal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 02:59:33 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/01 15:18:59 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	white_space()
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[i] == (' ' || '\t' || '\n' || '\v' || '\f' || '\r'))
	{
		i++;
		white_space();

		while ((str[i] == '-') && (str[i+1] != white_space()))
		{
			ft_atoi();
		}

	}
int ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (s//started removing the neg if & not sure  to move or keep it
		{
			sign = -1;
			i++;
			if (str[i] == white_space())
			{
				return (0);
			}
			if (str[i] <= 9 && str[i] >= 0)
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
