/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:45:06 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/16 22:43:19 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_lines(char *map)
{
	int i;
	int j;

	i = 0;
	while (map[i])
	{
		j = 0;
		if (map[i] == '\n')
		{
			if (j != ft_line_len(map))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_if_valid(char *map, char *instr)
{
	int i;
	int j;

	i = 0;
	while (map[i])
	{
		if (map[i] == empty_char(instr) || map[i] == obs_char(instr) ||
				map[i] == '\n')
			i++;
		else
		{
			write(2, "map error", 9);
			return (0);
		}
	}
	if (!check_lines(map))
	{
		write(2, "map error", 9);
		return (0);
	}
	return (1);
}
