/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 06:06:02 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 06:08:38 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

long	ft_add(int a, int b)
{
	return ((long)a + (long)b);
}

long	ft_sub(int a, int b)
{
	return (a - b);
}

long	ft_mul(int a, int b)
{
	return ((long)a * (long)b);
}

long	ft_div(int a, int b)
{
	return (a / b);
}

long	ft_mod(int a, int b)
{
	return (a % b);
}
