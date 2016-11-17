/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:31:05 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/13 16:01:41 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		top00(int x, int i, char *str)
{
	str[i++] = 'o';
	while ((x - 2) > 0)
	{
		str[i++] = '-';
		x--;
	}
	if (x > 1)
		str[i++] = 'o';
	return (i);
}

int		mid00(int x, int i, char *str)
{
	str[i++] = '|';
	while ((x - 2) > 0)
	{
		str[i++] = ' ';
		x--;
	}
	if (x > 1)
		str[i++] = '|';
	return (i);
}

int		bot00(int x, int i, char *str)
{
	str[i++] = 'o';
	while ((x - 2) > 0)
	{
		str[i++] = '-';
		x--;
	}
	if (x > 1)
		str[i++] = 'o';
	return (i);
}

char	*rush00(int x, int y)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(str) * (x + 1) * y + 1);
	if (x <= 0 || y <= 0)
		return (0);
	i = top00(x, i, str);
	str[i++] = '\n';
	while ((y - 2) > 0)
	{
		i = mid00(x, i, str);
		str[i++] = '\n';
		y--;
	}
	if (y > 1)
		i = bot00(x, i, str);
	if (y != 1)
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}
