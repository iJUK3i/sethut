/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:58:59 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/06 01:47:07 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_filler(int sudoku[][9], int row, int col);
int ft_avail(int sudoku[][9], int row, int col, int num);

int	main()
{
	int i;
	int j;
	int sudoku[9][9] = {{8, 7, 3, 2, 5, 4, 6, 0, 1},
						{9, 5, 2, 8, 6, 1, 7, 4, 3},
						{1, 4, 6, 9, 3, 7, 8, 2, 5},
						{4, 8, 0, 6, 1, 3, 2, 5, 7},
						{2, 3, 5, 7, 4, 9, 1, 6, 8},
						{7, 6, 1, 5, 8, 2, 4, 3, 9},
						{5, 1, 7, 4, 9, 6, 3, 8, 2},
						{6, 2, 8, 3, 7, 5, 0, 1, 4},
						{3, 0, 4, 1, 2, 8, 5, 7, 6}};
	if (ft_filler(sudoku, 0, 0))
	{
		i = 0;
		while (i < 9)
		{
			i++;
			j = 0;
			while (j < 9)
			{
				j++;
				printf("%d ", sudoku[i][j]);
				printf("\n");
			}
		}
	}
	else
	{
		printf("\n\nNO SoLUtiOnz!! dudez!\n\n");
	}
	return (0);
}
