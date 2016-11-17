/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 00:07:11 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/15 00:38:13 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		**binary_array(char *map, char *instr)
{
	int i;
	int j;
	int k;
	int **arr;

	*arr = (int *)malloc(sizeof(**arr) *
			(ft_line_len(map) * ft_nbr_lines(instr)));
	while (map[i])
	{
		if (map[i] == '\n')
			j++;
		else
			arr[j][k] = ft_ctobin(map, instr, map[i]);
		i++;
	}
	return (arr);
}
