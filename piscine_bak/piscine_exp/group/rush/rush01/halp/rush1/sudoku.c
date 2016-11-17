/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:43:09 by vmakarov          #+#    #+#             */
/*   Updated: 2016/11/05 16:06:47 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		check_argc(int argc)
{
	if (argc != 10)
		ft_putstr("Error\n");
	return (1);
}

int		check_inputs(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	check_argc(argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] > 57 || argv[i][j] < 48) && argv[i][j] != 46)
			{
				ft_putstr("Error\n");
				return (0);
			}
			j++;
		}
		if (j != 9)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	check_inputs(argc, argv);
}
