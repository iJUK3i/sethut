/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alldiff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:50:12 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/06 22:15:56 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	populate(int i, int *check);
int		check_block(char **arr, int blocknum, int *check);
int		check_row(char *row, int *check);
int		check_column(char **arr, int rn, int cn, int *check);
int		alldiff(char **arr);

int		alldiff(char **arr)
{
	int	*check;
	int i;

	i = 1;
	check = (int*)(malloc(sizeof(int) * 9));
	populate(9, check);
	while (i < 10)
	{
		if (!check_block(arr, i, check))
			return (0);
		populate(9, check);
		if (!check_row(arr[i], check))
			return (0);
		populate(9, check);
		if (!check_column(arr, 1, (i - 1), check))
			return (0);
		populate(9, check);
		i++;
	}
	return (1);
}

void	populate(int i, int *check)
{
	if (i > 0)
	{
		check[i - 1] = i;
		populate((i - 1), check);
	}
	return ;
}

int		check_block(char **arr, int blocknum, int *check)
{
	int i;
	int j;
	int block_x_os;
	int block_y_os;

	block_x_os = (((blocknum + 2) % 3) * 3);
	block_y_os = ((((blocknum + 2) / 3) - 1) * 3);
	i = block_y_os + 1;
	while (i < ((block_y_os + 3) + 1))
	{
		j = block_x_os;
		while (j < (block_x_os + 3))
		{
			if (arr[i][j] != '.')
			{
				if (check[(arr[i][j] - '0') - 1] == 0)
					return (0);
				else
					check[(arr[i][j] - '0') - 1] = 0;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check_row(char *row, int *check)
{
	if (*row)
	{
		if (*row != '.')
		{
			if (check[(*row - '0') - 1] == 0)
				return (0);
			else
			{
				check[(*row - '0') - 1] = 0;
				return (check_row((row + 1), check));
			}
		}
		else
			return (check_row((row + 1), check));
	}
	return (1);
}

int		check_column(char **arr, int rn, int cn, int *check)
{
	if (rn < 10)
	{
		if (arr[rn][cn] != '.')
		{
			if (check[(arr[rn][cn] - '0') - 1] == 0)
				return (0);
			else
			{
				check[(arr[rn][cn] - '0') - 1] = 0;
				return (check_column(arr, (rn + 1), cn, check));
			}
		}
		else
			return (check_column(arr, (rn + 1), cn, check));
	}
	return (1);
}
