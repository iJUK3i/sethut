/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:54:47 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/15 21:08:01 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	find_max(int **arr, char *map, char *instr)
{
	int i;
	int j;
	int x;

	i = 1;
	x = 0;
	while (i < ft_nbr_lines(instr))
	{
		j = 1;
		while (j < ft_line_len(map))
		{
			if (x < arr[i][j])
				x = arr[i][j];
			j++;
		}
		i++;
	}
	return (x);
}
