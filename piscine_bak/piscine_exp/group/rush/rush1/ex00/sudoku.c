/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:43:09 by vmakarov          #+#    #+#             */
/*   Updated: 2016/11/06 23:12:12 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_argc(int argc)
{
	if (argc != 10)
	{
		ft_putstr("Error1\n");
		return (0);
	}
	return (1);
}

/*int		check_row(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
		{
			k = 0;
			while (argv[i][k++])
			{
				if ((k != j) && (argv[i][j] != '.') && (argv[i][j] ==
							argv[i][k]))
				{
					ft_putstr("Error2\n");
					return (0);
				}
			}
		}
		i++;
	}
	return (1);
}*/

/*int		check_col(int argc, char **argv)
{
	int i;
	int j;
	int k;

	j = 0;
	while (j < argc)
	{
		i = 0;
		while ((argv[i][j]) && (i++ < argc))
		{
			k = 0;
			while ((argv[k][j]) && (k++ < argc))
			{
				if ((k != i) && (argv[i][j] != '.') && (argv[i][j] ==
							argv[k][j]))
				{
					ft_putstr("Error3\n");
					return (0);
				}
			}
		}
		j++;
	}
	return (1);
}*/

int		check_number_digits(int argc, char **argv)
{
	int i;
	int j;
	int count_dig;

	i = 1;
	count_dig = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] <= '9' && argv[i][j] >= '1'))
				count_dig++;
			j++;
		}
		i++;
	}
	if (count_dig < 17)
	{
		ft_putstr("Error6\n");
		return (0);
	}
	return (1);
}

int		check_forbidden_chars(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] > '9' || argv[i][j] <= '0') && argv[i][j] != '.')
			{
				ft_putstr("Error4\n");
				return (0);
			}
			j++;
		}
		if (j != 9)
		{
			ft_putstr("Error5\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int		check_inputs(int argc, char **argv)
{
	if (check_argc(argc) == 0)
		return (0);
	if (check_forbidden_chars(argc, argv) == 0)
		return (0);
	if (check_number_digits(argc, argv) == 0)
		return (0);
	return (1);
}

/*int		main(int argc, char **argv)
{
	check_inputs(argc, argv);
}
*/
