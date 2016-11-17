/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:44:19 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/09 22:50:19 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data);

t_list		*ft_create_elem(void *data)
{	
	t_list *node;

	node = (t_list*)malloc(sizeof(t_list*));
	if (node)
	{
		*node->data = data;
		node->next = NULL;
		return (node);
	}
	return (0);
}
