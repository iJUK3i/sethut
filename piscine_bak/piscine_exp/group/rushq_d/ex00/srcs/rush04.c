/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:41:34 by marahimi          #+#    #+#             */
/*   Updated: 2016/11/13 15:59:12 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		top04(int x, int i, char *str)
{
	str[i++] = 'A';
	while ((x - 2) > 0)
	{
		str[i++] = 'B';
		x--;
	}
	if (x > 1)
		str[i++] = 'C';
	return (i);
}

int		mid04(int x, int i, char *str)
{
	str[i++] = 'B';
	while ((x - 2) > 0)
	{
		str[i++] = ' ';
		x--;
	}
	if (x > 1)
		str[i++] = 'B';
	return (i);
}

int		bot04(int x, int i, char *str)
{
	str[i++] = 'C';
	while ((x - 2) > 0)
	{
		str[i++] = 'B';
		x--;
	}
	if (x > 1)
		str[i++] = 'A';
	return (i);
}

char	*rush04(int x, int y)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(str) * (x + 1) * y + 1);
	if (x <= 0 || y <= 0)
		return (0);
	i = top04(x, i, str);
	str[i++] = '\n';
	while ((y - 2) > 0)
	{
		i = mid04(x, i, str);
		str[i++] = '\n';
		y--;
	}
	if (y > 1)
		i = bot04(x, i, str);
	if (y != 1)
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}
