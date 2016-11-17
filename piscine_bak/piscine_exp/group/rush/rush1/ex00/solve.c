/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:40:26 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/06 23:15:26 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		solve(char **arr)
{
	int row;
	int column;
	int i;

	if (!find(arr))
		return (1);
	i = 1;
	row = next_blank(arr)[1];
	column = next_blank(arr)[0];
	while (i <= 9)
	{
		if (safe(arr, row, column, i))
		{
			arr[column][row] = (i + '0');
			if (solve(arr))
				return (1);
			arr[column][row] = '.';
		}
		i++;
	}
	return (0);
}
