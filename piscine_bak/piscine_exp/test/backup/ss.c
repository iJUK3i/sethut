/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 05:29:47 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 05:44:21 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

static long		(*g_tab[])(int, int) = { ft_add, ft_sub, ft_mul, ft_div, ft_mod };

int		ops_find(char *op_string, char op)
{
	int i;

	i = -1;
	while (op_string[++i])
		if (op_string[i] == op)
			return (i);
	return (-1);
}

long	solve_stack(struct s_list *input)
{
	struct s_list	*stack;
	struct s_list	*token;
	int temp;

	input = input->next;
	while (input)
	{
		if (input->type == NBR)
		{
			token = input->next;
			stack = st_push(&stack, &input);
			input = token;
		}
		else
		{
			temp = stack->value;
			stack = stack->next;
			stack->value = g_tab[ops_find("+-*/%", \
					input->value)](stack->value, temp);
			input = input->next;
		}
	}
	return (stack->value);
}
