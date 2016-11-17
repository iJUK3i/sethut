/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:40:31 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/06 22:34:12 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		find(char **arr)
{
	int i;
	int o;

	i = 1;
	while (i < 10)
	{
		o = 0;
		while (o < 9)
		{
			if (arr[i][o] == '.')
			{
				return (1);
			}
			o++;
		}
		i++;
	}
	return (0);
}