/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 00:07:11 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/16 21:16:41 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_binary_lines(int **arr, char *map, char *instr)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (j < ft_line_len(map))
	{
		if (map[k] == empty_char(instr))
			arr[i][j] = 1;
		else if (map[k] == obs_char(instr))
			arr[i][j] = 0;
		k++;
		j++;
	}
}

int		**binary_array(char *map, char *instr)
{
	int i;
	int j;
	int **arr;

	i = 0;
	arr = malloc(sizeof(int *) * ft_nbr_lines(instr));
	while (i < ft_nbr_lines(instr))
	{
		arr[i] = malloc(sizeof(int) * ft_line_len(map));
		ft_binary_lines(arr, map, instr);
		i++;
	}
	bin_bsq(arr, map, instr);
	return (arr);
}
