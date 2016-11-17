/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:52:22 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/16 21:30:17 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(char *str)
{
	char	*instr;
	char	*map;
	int		**arr;
	int		max;

	instr = ft_instructions(str);
	map = ft_map(str);
	arr = binary_array(map, instr);
	bin_bsq(arr, map, instr);
	max = find_max(arr, map, instr);
	make_bsq(arr, max, map, instr);
}
