/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 06:09:03 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 08:08:44 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

struct s_list	*ft_create_elem(int type, int value)
{
	struct s_list *ret;

	if ((ret = (struct s_list *)malloc(sizeof(struct s_list *))))
	{
		ret->type = type;
		ret->value = value;
		ret->next = NULL;
		return (ret);
	}
	return ((void *)0);
}

struct s_list	*pop(struct s_list **list)
{
	return ((*list)->next);
}

void	qu_push(struct s_list **list, struct s_list **new)
{
	struct s_list *current;

	current = *list;
	while (current->next && !is_head(current->next))
		current = current->next;
	new[0]->next = 0;
	current->next = *new;
}

struct s_list	*st_push(struct s_list **list, struct s_list **new)
{
	new[0]->next = *list;
	return (*new);
}

int		is_head(struct s_list *list)
{
	if (list->type == 0 && list->value == 0)
		return (1);
	return (0);
}
