/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shya.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 05:46:37 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 06:05:41 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

struct s_list	*parse_token(char *in, int *i)
{
	struct s_list *token;

	if ((in[*i] > 39 && in[*i] < 43) || in[*i] == '/' || in[*i] == '%')
	{
		token = ft_create_elem(OP, in[*i]);
		i[0]++;
		return (token);
	}
	else if ((in[*i] >= '0' && in[*i] <= '9') || in[*i] == '-' || in[*i] == '+')
	{
		if ((in[*i] == '-' || in[*i] == '+') && !((in[i[0] - 1] > 41 && in[i[0] - 1]
						< 44) || in[i[0] - 1] == 47 || *i == 0))
			token = ft_create_elem(OP, in[i[0]++]);
		else
		{
			token = ft_create_elem(NBR, ft_atoi(&in[i[0]++]));
			while (in[*i] >= '0' && in[*i] <= '9')
				i[0]++;
		}
		return (token);
	}
	return (0);
}

int		get_prec(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else if (c == '*' || c == '/' || c == '%')
		return (2);
	return (-1);
}

void		compare_op(struct s_list *token, \
		struct s_list **stack, struct s_list **queue)
{
	struct s_list *temp;

	if (token->value == '(')
		*stack = st_push(stack, &token);
	else if (token->value == ')')
	{
		while (stack[0]->value != '(')
		{
			temp = stack[0]->next;
			qu_push(queue, stack);
			stack[0] = temp;
		}
		*stack = pop(stack);
	}
	else
		compare_op(token, stack, queue);
}

struct s_list	*parse(char *in)
{
	struct s_list	*queue;
	struct s_list	*stack;
	struct s_list	*token;
	int i;

	i = 0;
	queue = ft_create_elem(0, 0);
	stack = ft_create_elem(0, 0);
	while (in[i])
	{
		if (in[i] == ' ')
			i++;
		else
		{
			token = parse_token(in, &i);
			if (token->type == OP)
				handle_op(token, &stack, &queue);
			else if (token->type == NBR)
				qu_push(&queue, &token);
		}
	}
	move_to_queue(&queue, &stack);
	return (queue);
}
