/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 05:12:16 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 08:08:11 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		is_valid(char *in)
{
	int i;
	int prev_type;
	int	paren_count;

	i = -1;
	prev_type = OP;
	paren_count = 0;
	while (in[++i])
	{
		if (in[i] == '(' || in[i] == ')')
			paren_count += (in[i] == '(') ? 1 : -1;
		if (paren_count < 0)
			return (0);
		if (in[i] == '/' || in[i] == '*' || in[i] == '%')
			if (prev_type == OP)
				return (0);
		if (in[i] == '(' || in[i] == '/' || in[i] == '*' || in[i] == '%'
				|| in[i] == '+' || in[i] == '-')
			prev_type = OP;
		else if ((in[i] >= '0' && in[i] <= '9') || in[i] == ')')
			prev_type = NBR;
		else if (in[i] != ' ')
			return (0);
	}
	return (!paren_count);
}

void	rm_whitespace(char *s)
{
	int x;
	int i;

	x = -1;
	i = -1;
	while (s[++x])
		if (s[x] != ' ')
			s[++i] = s[x];
	s[i + 1] = '\0';
}

int		eval_expr(char *str)
{
	rm_whitespace(str);
	return (solve_stack(parse(str)));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
