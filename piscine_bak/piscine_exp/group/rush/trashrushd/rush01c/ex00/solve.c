/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:40:26 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/06 21:41:26 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solve(char **arr)
{
	int row;
	int column;
	int i;

	if (!find(arr))
		return (1);
	i = 1;
	while (i <= 9)
	{
		if (safe(arr, row, column, i))
		{
			arr[column][row] = (i + '0');
			if (solve(arr))
				return (1);
			arr[column][row] = '.';
		}
	}
}
