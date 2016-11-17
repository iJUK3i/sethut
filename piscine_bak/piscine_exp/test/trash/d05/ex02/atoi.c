/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiforreal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 02:59:33 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/01 18:48:35 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	white_space()
{
	while (str[i] != '\0')
	{
		if ((str[0] <= 9) && (str[0] >= 0)) || ((str[0] == '-') || (str[0] == '+'))
		{
			i++;
			if (str[i] == ' ') || (str[i] ==  '\t') || (str[i] == '\n') 
				|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')
					return (0);
			while (str[0] == '-')
			{
				sign = -1;
				i++;
			}
			if 
				
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
