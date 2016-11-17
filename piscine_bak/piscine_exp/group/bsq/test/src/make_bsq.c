/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:09:51 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/16 21:12:19 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_bsq(int **arr, char *map, char *instr)
{
	int i;
	int j;

	i = 0;
	while (i < ft_nbr_lines(instr) && arr[i][j] != max)
	{
		j = 0;
		while (j < ft_line_len(map) && arr[i][j] != max)
		{
			if (arr[i][j] == 0)
				ft_putchar(obs_char(instr));
			else if (arr[i][j] == max)
				ft_putchar(full_char(instr));
			else
				ft_putchar(empty_char(instr));
			j++;
		}
		i++;
	}
}

int		i_coords(int **arr, char *map, *instr)
{
	int i;
	int j;

	i = 1;
	while (i < ft_nbr_lines(instr) && arr[i][j] != max)
	{
		j = 1;
		while (j < ft_line_len(map) && arr[i][j] != max)
		{
			j++;
		}
		if (arr[i][j] == max)
		{	
			a = i;
			b = j;
			break ;
		}
		if (arr[i][j] == max)
			break ;
		i++;
	}
	return (i);
}

int		j_coords(int **arr, char *map, *instr)
{
	int i;
	int j;

	i = 1;
	while (i < ft_nbr_lines(instr) && arr[i][j] != max)
	{
		j = 1;
		while (j < ft_line_len(map) && arr[i][j] != max)
		{
			j++;
		}
		if (arr[i][j] == max)
		{	
			a = i;
			b = j;
			break ;
		}
		if (arr[i][j] == max)
			break ;
		i++;
	}
	return (j);
}

void	build_bsq(int **arr, int max, int a, int b)
{
	int i;
	int j;

	i = a;
	while (i > a - (max))
	{	
		j = b;
		while (j > b - (max))
		{
			arr[i][j] = max;
			j--;
		}
		i--;
	}
}

void	make_bsq(int **arr, int max, char *map, char *instr)
{
	int i;
	int j;
	int a;
	int b;

	i = i_coords(arr, map, instr);
	j = j_coords(arr, map, instr);
	a = i;
	b = j;
	while (i < ft_nbr_lines(instr) && arr[i][j] != max)
	{
		while (j < ft_line_len(map) && arr[i][j] != max)
		{
			if (arr[i][j] != 0)
				arr[i][j] = 1;
			j++;
		}
		i++;
	}
	build_bsq(arr, max, a, b);
	print_bsq(arr, map, instr);
	free(arr);
}
