/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s2q.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 05:27:16 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 05:29:31 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	move_to_queue(struct s_list **queue, struct s_list **stack)
{
	struct s_list	*token;

	while (!is_head(stack[0]))
	{
		token = stack[0]->next;
		qu_push(queue, stack);
		if (token)
			stack[0] = token;
		else
			break;
	}
}
