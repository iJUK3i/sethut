/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctobin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 00:19:29 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/15 00:38:03 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_ctobin(char *map, char *instr, char c)
{
	int i;

	if (c == empty_char(instr))
		i = 1;
	else
		i = 0;
	return (i);
}