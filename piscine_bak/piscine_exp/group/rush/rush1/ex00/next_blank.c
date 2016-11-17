/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_blank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:39:26 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/06 22:42:58 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		*next_blank(char **arr)
{
	int		*loc;

	loc = (int*)(malloc(sizeof(int) * 2));
	loc[0] = 1;
	loc[1] = 0;
	while (loc[0] < 10)
	{
		while(loc[1] < 9)
		{
			if (arr[loc[0]][loc[1]] == '.')
				return loc;
			loc[1]++;
		}
		loc[0]++;
	}
	return (loc);
}
