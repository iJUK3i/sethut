/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_bsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:35:51 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/16 20:52:34 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_bin_math(int **arr, int i, int j)
{
	int a;

	if (arr[i - 1][j - 1] <= arr[i - 1][j] &&
			arr[i - 1][j - 1] <= arr[i][j - 1])
		a = 1 + arr[i - 1][j - 1];
	else if (arr[i][j - 1] <= arr[i - 1][j] &&
			arr[i][j - 1] <= arr[i - 1][j - 1])
		a = 1 + arr[i][j - 1];
	else
		a = 1 + arr[i - 1][j];
	return (a);
}

void	bin_bsq(int **arr, char *map, char *instr)
{
	int i;
	int j;

	i = 1;
	while (i < ft_nbr_lines(instr))
	{
		j = 1;
		while (j < ft_line_len(map))
		{
			if (arr[i][j] != 0)
				arr[i][j] = ft_bin_math(arr, i, j);
			j++;
		}
		i++;
	}
}
