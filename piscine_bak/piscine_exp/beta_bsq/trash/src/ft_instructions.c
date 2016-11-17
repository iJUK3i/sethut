/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:24:51 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 17:29:23 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_instructions(char *in)
{
	int		i;
	char	*instructions;

	i = 0;
	instructions = (char *)malloc(ft_instr_len(in) + 1);
	while (i < ft_instr_len(in))
	{
		instructions[i] = in[i];
		i++;
	}
	instructions[i] = '\0';
	return (instructions);
}
